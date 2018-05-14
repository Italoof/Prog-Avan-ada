#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica
{
    int x1,x2;
    int y1,y2;
public:
    Reta(int x1_, int y1_, int x2_, int y2_);
    void draw(Screen& t);
    int Sinal(float n);
};

#endif // RETA_H
