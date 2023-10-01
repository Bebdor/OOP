#ifndef OOP_TIME_H
#define OOP_TIME_H

#include "../utils/main.h"


class Time {
    int hour;
    int minute;

public:
    Time(int h = 0, int m = 0);

    void setStart(int h, int m);

    string getArrival(int dHour, int dMinute);
};


#endif //OOP_TIME_H
