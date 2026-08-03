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
    direccion = Vector3Normalize(Vector3Subtract(objetivoInicial, posicionInicial));
}

void Proyectil::actualizar()
{
    Vector3 movimiento = Vector3Scale(direccion, velocidad * GetFrameTime());
    posicion = Vector3Add(posicion, movimiento);

    tiempoRestanteDeVida -= GetFrameTime();
}

void Proyectil::dibujar()
{
    DrawSphere(posicion, size, BLUE);
}