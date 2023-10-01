#include "Appointment.h"

Appointment::Appointment(int h, int m, int d, int mo, int y, string s){
    setAppointment(d, mo, y, s);
}

void Appointment::setAppointment(int d, int mo, int y, string s) {
    if(d < 1 || d > 31 || mo < 1 || mo > 12 || y < 0) {
        throw InvalidTimeException();
    }

    day = d;
    month = mo;
    year = y;
    subject = s;
}

string Appointment::getAppointment() {
    string date = (day < 10 ? "0" : "") + to_string(day) + "." + (month < 10 ? "0" : "") + to_string(month) + "." + to_string(year);
    return date + " " + getArrival(0, 0) + " - " + subject;
}