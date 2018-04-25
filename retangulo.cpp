#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    setV(x,y);
    setV(x,y-altura);
    setV(x+largura,y-altura);
    setV(x+largura,y);

}
