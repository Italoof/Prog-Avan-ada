#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

void Point::setX(float _x){
    x=_x;
}

void Point::setY(float _y){
    y=_y;
}

void Point::setXY(float _x,float _y){
    x=_x;
    y=_y;
}

float Point::getX(void){
    return x;
}

float Point::getY(void){
    return y;
}

Point Point::add(Point p1){

    Point pAdd;

    pAdd.x=x+p1.x;
    pAdd.y=y+p1.y;

    return pAdd;
}

float Point::norma(void){
    return sqrt(pow(x,2)+pow(y,2));
}

void Point::translada(float a, float b){
    x=x+a;
    y=y+b;
}

void Point::imprime(void){
    cout<<"("<<x<<","<<y<<")";
}
