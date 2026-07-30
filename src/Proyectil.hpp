#pragma once
#include "raylib.h"

// Cabecera

// Clase que define los proyectiles
class Proyectil
{
private:
    Vector3 posicion;
    float velocidad;
    float size;
    Vector3 objetivo;

public:
    Proyectil( Vector3 posicionInicial, float velocidadInicial, float nuesizeInicial, Vector3 objetivoInicial);

    // Métodos getters (de obtención)
    Vector3 getPosicion() { return posicion; }
    float getVelocidad() { return velocidad; }
    float getSize() { return size; }

    // Métodos setters (de modificación)
    void setPosicion(Vector3 nuevaPosicion) { posicion = nuevaPosicion; }
    void actualizar();
};