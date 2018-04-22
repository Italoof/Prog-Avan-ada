#include <iostream>
#include "point.h"
#include "poligono.h"

using namespace std;

int main()
{

    Poligono p;
    Point pont;

    p.setV(1,2);
    p.setV(2,3);
    p.setV(2,5);
    p.setV(1,6);
    p.setV(2,7);
    p.setV(0,8);

    cout<<p.getNV()<<" vértices\n";
    cout<<p.area()<<" - Área\n\n";

    p.imprimeP();

cout<<endl;

    p.translada(2,4);

    p.imprimeP();



    return 0;

}

