#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

void point::setX(float _x){
    x=_x;
}

void point::setY(float _y){
    y=_y;
}

void point::setXY(float _x,float _y){
    x=_x;
    y=_y;
}

float point::getX(void){
    return x;
}

float point::getY(void){
    return y;
}

point point::add(point p1){

    point pAdd;

    pAdd.x=x+p1.x;
    pAdd.y=y+p1.y;

    return pAdd;
}

float point::norma(void){
    return sqrt(pow(x,2)+pow(y,2));
}

void point::translada(float a, float b){
    x=x+a;
    y=y+b;
}

void point::imprime(void){
    cout<<"("<<x<<","<<y<<")";
}
