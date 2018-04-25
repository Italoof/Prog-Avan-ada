#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class funciona para manipular pontos com coordenadas (x,y).
 */

class Point{

private:
    float x,y;

public:

    /**
     * @brief Insere o valor da coordenada x.
     * @param _x Coordenada x a ser inserida.
     */
    void setX(float _x);

    /**
     * @brief Insere o valor da coordenada y.
     * @param _y Posição y a ser inserida.
     */
    void setY(float _y);

    /**
     * @brief Insere as posições x e y.
     * @param _x Coordenada x a ser coordenada.
     * @param _y Coordenada y a ser coordenada.
     */
    void setXY(float _x,float _y);

    /**
     * @brief Recupera a posição x.
     * @return Coordenada x do ponto.
     */
    float getX(void);

    /**
     * @brief Recupera a posição y.
     * @return Coordenada y do ponto.
     */

    float getY(void);

    /**
     * @brief Adiciona as coordenadas (x,y)
     * do ponto com as coordenadas de um ponto P1(x1,y1) fornecido.
     * @param p1 Ponto com coordenadas (x1,y1) a serem somadas.
     * @return Novo ponto com coordenadas (x+x1,y+y1).
     */

    Point add(Point p1);

    /**
     * @brief Subtrai as coordenadas (x,y)
     * do ponto com as coordenadas de um ponto P1(x1,y1) fornecido.
     * @param p1 Ponto com coordenadas (x1,y1) a serem subtraídas
     * @return Novo ponto com coordenadas (x-x1,y-y1).
     */

    Point sub(Point p1);

    /**
     * @brief Calcula a distância do ponto para a origem do sistema de coordenadas.
     * @return Distância entre (x,y) e (0,0).
     */
    float norma(void);

    /**
     * @brief Transalada o ponto (x,y) de (+a,+b).
     * @param a Valor a ser transladado em x.
     * @param b Valor a ser transladado em y.
     */
    void translada(float a, float b);

    /**
     * @brief Imprime o ponto na forma (x,y).
     */
    void imprime(void);

};


#endif // POINT_H

