#include <iostream>
#include "List.h"
#include "Item.h"
#include "Calender.h"

int main() {
    List myList;

    Item task1("Finish Homework", 1, Item::ToDo);
    Calender cal1(10, 12, 18, 30);
    task1.setDueDate(cal1);

    Item task2("Buy Groceries", 2, Item::Done);
    Calender cal2(9, 12, 12, 0);
    task2.setDueDate(cal2);

    Item task3("Study", 3, Item::Doing);
    Calender cal3(11, 12, 20, 0);
    task3.setDueDate(cal3);

    myList.addItem(task1);
    myList.addItem(task2);
    myList.addItem(task3);

    std::cout << "\n===== PRINTING LIST =====\n";
    myList.print();

    return 0;
}
