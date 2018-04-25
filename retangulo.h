#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief The Retangulo class funcina para manipular um poligono específico, o retângulo.
 * @details A classe cria um retângulo, um polígono de quatro vértices e herda os métodos da classe polígono.
 */
class Retangulo : public Poligono
{
public:
    /**
     * @brief O construtor da classe recebe as coordenadas (x,y) do ponto superior esquerdo de retângulo, a altura e a largura dele.
     * @param x Coordenada x do vértice superior esquerdo do retângulo.
     * @param y Coordenada y do vértice superior esquerdo do retângulo.
     * @param largura Largura do Retângulo.
     * @param altura Altura do Retângulo.
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
