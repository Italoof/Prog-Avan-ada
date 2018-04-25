#include "poligono.h"
#include <iostream>
#include <cmath>
#define PI 3.1415927

using namespace std;

Poligono::Poligono()
{
    nVertices=0;
}

void Poligono::setV(float x, float y)
{
    bool valido=1;

    if(nVertices==100) valido=0;

    for(int i=0;i<nVertices;i++){
        if(x==vertices[i].getX() && y==vertices[i].getY()){
            valido=0;
            break;
        }
    }


    if(valido){
        vertices[nVertices].setXY(x,y);
        nVertices++;
    }
}


void Poligono::setV(Point v)
{
    bool valido=1;

    if(nVertices==100) valido=0;

    for(int i=0;i<nVertices;i++){
        if(v.getX()==vertices[i].getX() && v.getY()==vertices[i].getY()) {
            valido=0;
            break;
        }
    }

    if(valido){
        vertices[nVertices].setXY(v.getX(),v.getY());
        nVertices++;
    }
    else {
        cout<< "Vértice ";
        v.imprime();
        cout<<" inválido!\n";
    }
}

int Poligono::getNV()
{
    return nVertices;
}

float Poligono::area()
{

    float produto1=0, produto2=0;

    for(int i=1;i<nVertices;i++){
        produto1+=vertices[i-1].getX()*vertices[i].getY();
    }
    produto1+=vertices[nVertices-1].getX()*vertices[0].getY();

    for(int i=1;i<nVertices;i++){
        produto2+=vertices[i-1].getY()*vertices[i].getX();
    }
    produto2+=vertices[nVertices-1].getY()*vertices[0].getX();

    return (produto1-produto2)/2;
}

void Poligono::rot(float ang, float x0, float y0)
{
    float xOld;
    float yOld;

    ang=ang*PI/180;

    for(int i=0;i<nVertices;i++){
        xOld=vertices[i].getX();
        yOld=vertices[i].getY();

        vertices[i].setX(x0+cos(ang)*(xOld-x0)- sin(ang)*(yOld-y0));
        vertices[i].setY(y0+sin(ang)*(xOld-x0)+ cos(ang)*(yOld-y0));
    }
}

void Poligono::rot(float ang, Point r)
{
    float xOld,yOld;
    float x0,y0;

    x0=r.getX();
    y0=r.getY();

    ang=ang*PI/180;

    for(int i=0;i<nVertices;i++){
        xOld=vertices[i].getX();
        yOld=vertices[i].getY();

        vertices[i].setX(x0+cos(ang)*(xOld-x0)- sin(ang)*(yOld-y0));
        vertices[i].setY(y0+sin(ang)*(xOld-x0)+ cos(ang)*(yOld-y0));
    }
}

void Poligono::translada(float a, float b)
{
    float xOld, yOld;

    for(int i=0;i<nVertices;i++){
        xOld=vertices[i].getX();
        yOld=vertices[i].getY();

        vertices[i].setX(xOld+a);
        vertices[i].setY(yOld+b);
    }
}

void Poligono::imprime()
{
    for(int i=0;i<nVertices;i++){
        vertices[i].imprime();
        cout<<" --> ";
    }
    vertices[0].imprime();
    cout<<endl;
}





