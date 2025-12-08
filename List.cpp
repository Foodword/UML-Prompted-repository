#include "List.h"
#include <iostream>
#include <stdexcept>

List::List() {}

void List::manageItem() {
    std::cout << "Managing items...\n";
}

void List::addItem(const Item& item) {
    if (item.getStatus() == Item::Done)
        done_list.push_back(item);
    else
        to_do_list.push_back(item);
}

Item List::getItem(int id) {
    for (auto& item : to_do_list)
        if (item.getID() == id)
            return item;

    for (auto& item : done_list)
        if (item.getID() == id)
            return item;

    throw std::runtime_error("Item not found.");
}

void List::print() {
    std::cout << "\n====== TO-DO ITEMS ======\n";
    for (auto& item : to_do_list)
        item.print();

    std::cout << "\n====== DONE ITEMS ======\n";
    for (auto& item : done_list)
        item.print();
}
