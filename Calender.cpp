#include "Calender.h"

Calender::Calender(int d, int m, int h, int min)
    : day(d), month(m), hour(h), minute(min) {}

void Calender::setDue_Date(int d, int m, int h, int min) {
    day = d;
    month = m;
    hour = h;
    minute = min;
}

// Encode as: MMDDHHMM
int Calender::getDue_Date() {
    return (month * 1000000) + (day * 10000) + (hour * 100) + minute;
}

std::string Calender::getMonth() {
    static const std::string months[] = {
        "Invalid","January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
    return (month >= 1 && month <= 12) ? months[month] : "Invalid";
}
