#include <iostream>
#include "Time.h"

Time::Time(int h, int m) : hour(h), minute(m)
{

}

void Time::setStart(int h, int m) {

    if(h >= 0 && h < 24 && m >= 0 && m < 60) {
        hour = h;
        minute = m;
    }
    else
    {
        throw InvalidTimeException();
    }
}

string Time::getArrival(int dHour, int dMinute) {
    int totalMinutes = hour * 60 + minute + dHour * 60 + dMinute;
    hour = (totalMinutes / 60) % 24;
    minute = totalMinutes % 60;

    string hours = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    string minutes = (minute < 10) ? "0" + to_string(minute) : to_string(minute);

    return hours + ":" + minutes + " Uhr";
}