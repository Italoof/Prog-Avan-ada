#ifndef POLIGONO_H
#define POLIGONO_H
#define MAX 100
#include "point.h"


class Poligono
{
private:

    Point vertices[MAX];
    int nVertices;

public:

    Poligono();
    void setV(float x, float y);
    void setV(float x, float y, int vert);
    void setV(Point v);
    int getNV(void);
    float area(void);
    void rot(float ang, float x0, float y0);
    void rot(float ang, Point r);
    void translada(float a, float b);
    void imprimeP(void);
};

#endif // POLIGONO_H
