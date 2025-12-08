#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
#include "Calender.h"

class Item {
public:
    enum Status { Done, ToDo, Doing };

private:
    std::string name;
    int id;
    Status status;
    int due_date;     // stored as int (MMDDHHMM)

public:
    Item(std::string n, int i, Status s);

    std::string getName();
    int getID();
    Status getStatus();

    void setDueDate(Calender& cal);
    int getDueDate();

    void print();
};

#endif
