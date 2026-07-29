#include "Zona Segura.hpp"

//Código fuente

ZonaSegura::ZonaSegura (Vector3 nuevaPosicion,float NuevoSize)

{
    posicion = nuevaPosicion;
    size = NuevoSize;

}

void ZonaSegura::dibujar() const
{
    DrawCubeWires(posicion,size,size,size,GREEN);
}
BoundingBox ZonaSegura::getBoundingBox()
{
    return {
        (Vector3){posicion.x - size/ 2, posicion.y - size / 2, posicion.z - size / 2},
        (Vector3){posicion.x + size/ 2, posicion.y + size / 2, posicion.z + size / 2}
};

}