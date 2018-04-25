#ifndef POLIGONO_H
#define POLIGONO_H
#define MAX 100
#include "point.h"

/**
 * @brief The Poligono class funciona para manipular polígonos.
 * @details A classe permite a criação de polígonos com até 100 vértices.
 * @details Os vértices devem sem declarados em ordem anti-horária.
 * @details As arestas dos polígonos são represetadas pelos segmentos (x0,y0) --> (x1,y1), (x1,y1) --> (x2,y2),  etc., com exceção da
 * última aresta (x{N-1},y{N-1}) --> (x0,y0).
 */
class Poligono
{
private:

    Point vertices[MAX];
    int nVertices;

public:

    /**
     * @brief O construtor da classe inicializa o número de vértices do polígono como zero.
     */
    Poligono();
    /**
     * @brief Insere um novo vértice no polígono através de coordenadas (x,y).
     * @param x Coordenada x a ser inserida.
     * @param y Coordenada y a ser inserida.
     */
    void setV(float x, float y);
    /**
     * @brief Insere um novo vértice no polígono através de um ponto.
     * @param v Ponto a ser inserido como vértice.
     */
    void setV(Point v);
    /**
     * @brief Recupera a quantidade de vértices do polígono.
     * @return Número de vértices.
     */
    int getNV(void);
    /**
     * @brief Calcula a área do polígono.
     * @return Área do polígono.
     */
    float area(void);
    /**
     * @brief Rotaciona o polígono ao redor de um ponto dado por coordenadas (x,y), no sentido anti-horário.
     * @param ang Ângulo de rotação.
     * @param x0 Coordenada x0 do ponto de rotação.
     * @param y0 Coordenada y0 do ponto de rotação.
     */
    void rot(float ang, float x0, float y0);
    /**
     * @brief Rotaciona o polígono ao redor de um ponto, no sentido anti-horário.
     * @param ang Ângulo de rotação.
     * @param r Ponto de rotação.
     */
    void rot(float ang, Point r);
    /**
     * @brief Translada o polígono para (+a, +b)
     * @param a Valor em x a ser transladado.
     * @param b Valor em y a ser transladado.
     */
    void translada(float a, float b);
    /**
     * @brief Imprime o polígono na forma (x0,y0) --> (x1,y1) --> (x2,y2)...
     */
    void imprime(void);
};

#endif // POLIGONO_H
