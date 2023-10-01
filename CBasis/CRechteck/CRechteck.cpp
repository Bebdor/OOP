#include "CRechteck.h"
CRechteck::CRechteck(float b, float h) : breite(b), hoehe(h) {}

float CRechteck::Umfang() const {
    return 2 * (breite + hoehe);
}

float CRechteck::Flaeche() const {
    return breite * hoehe;
}

void CRechteck::setBreite(float b) {
    breite = (b > 0) ? b : 1;
}

void CRechteck::setHoehe(float h) {
    hoehe = (h > 0) ? h : 1;
}