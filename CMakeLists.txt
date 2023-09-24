cmake_minimum_required(VERSION 3.26)
project(OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP main.cpp
        Time/Time.cpp
        Time/Time.h
        utils/main.h
        Termin/Appointment.cpp
        Termin/Appointment.h
        "utils/Aufgabe_5.3.cpp"
        "utils/Aufgabe_5.4.cpp")
