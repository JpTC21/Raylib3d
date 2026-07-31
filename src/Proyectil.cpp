#include "Proyectil.hpp"
#include "raymath.h"
// Codigo fuente

Proyectil::Proyectil(Vector3 posicionInicial, float velocidadInicial, float sizeInicial, Vector3 objetivoInicial, float tiempoRestanteDeVidaInicial)
{
    posicion = posicionInicial;
    velocidad = velocidadInicial;
    size = sizeInicial;
    objetivo = objetivoInicial;
    tiempoRestanteDeVida = tiempoRestanteDeVidaInicial;
}

void Proyectil::actualizar()
{
    Vector3 direccion = Vector3Subtract(objetivo, posicion);
    Vector3 movimiento = Vector3Scale(direccion, velocidad * GetFrameTime());
    posicion = Vector3Add(posicion, movimiento);

    tiempoRestanteDeVida -= GetFrameTime();
}

void Proyectil::dibujar()
{
    DrawSphere(posicion, size, BLUE);
}