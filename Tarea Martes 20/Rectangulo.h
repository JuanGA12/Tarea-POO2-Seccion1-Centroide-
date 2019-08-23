//
// Created by Juan Galvez on 2019-08-21.
//

#ifndef TAREA_MARTES_20_RECTANGULO_H
#define TAREA_MARTES_20_RECTANGULO_H


#include "Triangulo.h"

class Rectangulo: public Triangulo {

public:
    Rectangulo(){};
    Rectangulo(float x, float y, int verdad, float base, float altura);
    virtual ~Rectangulo(){};

    float area() override ;

};


#endif //TAREA_MARTES_20_RECTANGULO_H
