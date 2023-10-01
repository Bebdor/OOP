#include "../Time/Time.h"

int navi() {

    Time time;

    int h, m, h2, m2;

    cout << "Bitte gib einen Startzeit ein (Format: HH:MM):\n ";
    scanf("%d:%d", &h, &m);

    cout << "Bitte gib die Fahrtdauer ein (Format: HH:MM):\n ";
    scanf("%d:%d", &h2, &m2);

    time.setStart(h, m);
    printf("%s", time.getArrival(h2, m2).c_str());

    return 0;
}