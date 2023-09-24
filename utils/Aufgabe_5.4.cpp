//
// Created by bebdor on 22.09.23.
//

#include "../Termin/Appointment.h"

int Termin()
{
    int h, m, d, mo, y;
    char s[100];
    cout << "Bitte geben Sie die Uhrzeit und das Datum im folgendem Schema ein: HH:MM DD.MM.YYYY S (Wobei \"S\" Der Name des Termins ist)\n» ";
    scanf("%d:%d %d.%d.%d %s", &h, &m, &d, &mo, &y, s);

    try
    {
        Appointment appointment(h, m, d, mo, y, s);
        appointment.setStart(h, m);
        printf("Termin: %s\n", appointment.getAppointment().c_str());
    } catch (const InvalidTimeException &e) {
        cout << "Error: " << e.what() << '\n';
    }
    return 0;
}