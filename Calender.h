#ifndef CALENDER_H
#define CALENDER_H

#include <string>

class Calender {
private:
    int day;
    int month;
    int hour;
    int minute;

public:
    Calender(int d = 1, int m = 1, int h = 0, int min = 0);

    void setDue_Date(int d, int m, int h, int min);

    int getDue_Date();            // returns integer format MMDDHHMM
    std::string getMonth();       // month name
};

#endif
