#include "utils/main.h"

int main() {

    int x;

    cout << "Bitte gib eine Zahl zwischen 1 - 2 ein:\n ";
    cin >> x;
    switch (x) {
        case 1:
            navi();
            break;
        case 2:
            Termin();
            break;
    }
    return 0;
}
