#ifndef OOP_MAIN_H
#define OOP_MAIN_H

#endif //OOP_MAIN_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;


class InvalidTimeException : public exception {
public:
    const char * what() const throw() {
        return "Invalid Time input";
    }
};


int navi();
int Termin();