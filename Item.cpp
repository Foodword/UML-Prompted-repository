#include "Item.h"

Item::Item(std::string n, int i, Status s)
    : name(n), id(i), status(s), due_date(0) {}

std::string Item::getName() { return name; }
int Item::getID() { return id; }
Item::Status Item::getStatus() const { return status; }

void Item::setDueDate(Calender& cal) {
    due_date = cal.getDue_Date();
}

int Item::getDueDate() {
    return due_date;
}

void Item::print() {
    std::cout << "Item ID: " << id << "\n"
              << "Name: " << name << "\n"
              << "Status: ";

    switch (status) {
        case Done:  std::cout << "Done"; break;
        case ToDo:  std::cout << "To-Do"; break;
        case Doing: std::cout << "Doing"; break;
    }

    std::cout << "\nDue Date (MMDDHHMM): " << due_date
              << "\n-----------------------------\n";
}
