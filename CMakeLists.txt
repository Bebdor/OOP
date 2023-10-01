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
        "utils/Aufgabe_5.4.cpp"
        CBasis/CBasisForm.h
        CBasis/CRechteck/CRechteck.cpp
        CBasis/CRechteck/CRechteck.h
        utils/Aufgabe_5.5.cpp
        CBasis/CDreieck/CDreieck.cpp
        CBasis/CDreieck/CDreieck.h
        CBasis/CKreis/CKreis.cpp
        CBasis/CKreis/CKreis.h
)
