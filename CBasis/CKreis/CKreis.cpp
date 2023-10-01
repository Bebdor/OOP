#include "../../utils/main.h"
#include "CKreis.h"
CKreis::CKreis(float r) : radius(r){}

float CKreis::Flaeche() const {
    return 3.1415*pow(radius, 2);
}

float CKreis::Umfang() const {
    return 2*3.1415*radius;
}

void CKreis::setRadius(float r) {
    radius = r;
}