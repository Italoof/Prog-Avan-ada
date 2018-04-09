#ifndef POLIGONO_H
#define POLIGONO_H
#define MAX 100
#include "point.h"


class Poligono
{
private:

    Point *vertices;

public:

    Point setVertice(Point v);
};

#endif // POLIGONO_H
