#pragma once 
#include "raylib.h"

class ZonaSegura
{
private:
    //Atributos
    Vector3 posicion;
    float size;
public:
     ZonaSegura(Vector3 posicion, float size);
     //Métodos
     Vector3 getPosicion() {return posicion;}
     void dibujar() const;
      BoundingBox getBoundingBox();
};