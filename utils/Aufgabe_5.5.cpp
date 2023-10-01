#include "../CBasis/CRechteck/CRechteck.h"
#include "../CBasis/CKreis/CKreis.h"
#include "../CBasis/CDreieck/CDreieck.h"
#include "main.h"

void CBasis() {
    string x;
    cout
            << "Bitte schreib, von was der Umfang und die Flächeninhalt berechnet werden soll (Rechteck, Dreieck, Kreis): \n» ";
    cin >> x;

    if (x == "Rechteck") {
        CRechteck rechteck;

        double b, h;

        cout << "Bitte gib die Breite und dann die Höhe des Rechtecks ein: ";
        cin >> b >> h;

        rechteck.setBreite(b);
        rechteck.setHoehe(h);

        cout << "Umfang: " << rechteck.Umfang() << endl << "Flache: " << rechteck.Flaeche();
    }

    if (x == "Dreieck") {
        CDreieck dreieck;

        double a, b, c;

        cout << "Bitte gib die Werte a, b und c ein (Bedenke, dass a und b insgesamt größer als c seien sollen):\n» ";
        cin >> a >> b >> c;
        if ((a + b) <= c)
        {
            throw InvalidInputException();
        }
        dreieck.setA(a);
        dreieck.setB(b);
        dreieck.setC(c);
        cout << "Der Umfang ist: " << dreieck.Umfang() <<
        endl << "Der Flächeninhalt ist: " << dreieck.Flaeche();

    }

    if (x == "Kreis") {
        CKreis kreis;

        double r;

        cout << "Bitte gib den Radius ein:\n» ";
        cin >> r;

        kreis.setRadius(r);

        cout << "Umfang: " << kreis.Umfang() << endl << "Flache: " << kreis.Flaeche();
    }
}