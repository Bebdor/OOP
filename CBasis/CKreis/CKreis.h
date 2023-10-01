#ifndef OOP_CKREIS_H
#define OOP_CKREIS_H


#include "../CBasisForm.h"

class CKreis : public CBasisForm {
private:
    float radius;

public:
    CKreis(float r = 0.0);

    float Umfang() const override;

    float Flaeche() const override;

    void setRadius(float r);

};


#endif //OOP_CKREIS_H
