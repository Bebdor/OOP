#include <valarray>
#include "CDreieck.h"
CDreieck::CDreieck(float a, float b, float c) : A(a), B(b), C(c) {}

float CDreieck::Umfang() const {
    return A+B+C;
}
float CDreieck::Flaeche() const {
    float s = (A+B+C)/2;
    return sqrt(s*(s-A)*(s-B)*(s-C));
}

void CDreieck::setA(float a) {
    A = (a > 0) ? a : 1;
}
void CDreieck::setB(float b) {
    B = (b > 0) ? b : 1;
}
void CDreieck::setC(float c) {
    C = (c > 0) ? c : 1;
}