#include "Tablero.h"

Tablero::Tablero()
{
    //ctor
}

Tablero::Tablero(int dimensionDelTablero)
{
    this -> dimensionDelTablero = dimensionDelTablero;
}

void Tablero::setDimensionDelTablero(int dimensionDelTablero){this -> dimensionDelTablero = dimensionDelTablero;}
int Tablero::getDimensionDelTablero(){return dimensionDelTablero;}

void Tablero::dibujarTablero(int dimensionDelTablero){}

Tablero::~Tablero()
{
    //dtor
}
