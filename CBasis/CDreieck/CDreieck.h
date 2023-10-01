#ifndef OOP_CDREIECK_H
#define OOP_CDREIECK_H


#include "../CBasisForm.h"

class CDreieck : public CBasisForm {
private:
    float A;
    float B;
    float C;

public:
    CDreieck(float a = 0.0, float b = 0.0, float c = 0.0);

    float Umfang() const override;

    float Flaeche() const override;

    void setA(float a);

    void setB(float b);

    void setC(float c);

};


#endif //OOP_CDREIECK_H
