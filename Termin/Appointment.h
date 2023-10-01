#ifndef OOP_APPOINTMENT_H
#define OOP_APPOINTMENT_H

#include "../Time/Time.h"

class Appointment : public Time{
    int day, month, year;
    std::string subject;
public:
    Appointment(int h = 0, int m = 0, int d = 1, int mo = 1, int y = 2000, std::string s = "");

    void setAppointment(int d, int mo, int y, std::string s);
    std::string getAppointment();
};


#endif //OOP_APPOINTMENT_H
