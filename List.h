#ifndef LIST_H
#define LIST_H

#include <vector>
#include "Item.h"

class List {
private:
    std::vector<Item> to_do_list;
    std::vector<Item> done_list;

public:
    List();

    void manageItem();
    void addItem(const Item& item);
    Item getItem(int id);

    void print();
};

#endif
