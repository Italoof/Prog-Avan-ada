#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{

    Retangulo ret(0,0,4,3);

    ret.imprime();

    cout<<"\nÁrea =" <<ret.area()<<endl<<endl;

    ret.translada(-3,4);

    ret.imprime();

    cout<<"\nÁrea depois de transladado=" <<ret.area()<<endl<<endl;

    ret.rot(30,-1,2.5);

    ret.imprime();

    cout<<"\nÁrea depois de transladado e rotacionado=" <<ret.area()<<endl<<endl;

    return 0;

}

