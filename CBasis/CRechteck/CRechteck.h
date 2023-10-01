#ifndef OOP_CRECHTECK_H
#define OOP_CRECHTECK_H

#include "../CBasisForm.h"

class CRechteck : public CBasisForm {
private:
    float breite;
    float hoehe;

public:
    CRechteck(float b = 0.0, float h = 0.0);

    float Umfang() const override;

    float Flaeche() const override;

    void setBreite(float b);

    void setHoehe(float h);
};


#endif //OOP_CRECHTECK_H
