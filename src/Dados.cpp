#include "Dados.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Menu.h>

using namespace std;

Dados::Dados()
{
    ///ctor vacio
}

Dados::Dados(int numeros_para_los_dados, vector<int> cuatroDadooss)
{
    ///ctor con thissss
    this -> numeros_para_los_dados = numeros_para_los_dados;
    this -> cuatroDadooss = cuatroDadooss;
}

/// setters y getters para las funciones generadoras
void Dados::setNumeros_para_los_dados(int numeros_para_los_dados)
{
    this -> numeros_para_los_dados = numeros_para_los_dados;
}
int Dados::getNumeros_para_los_dados()
{
    return numeros_para_los_dados;
}

/// setters y getters para el vector con los dados

void Dados::setCuatroDadooss(vector <int> cuatroDadooss)
{
    this -> cuatroDadooss = cuatroDadooss;
}

vector<int> Dados::getCuatroDadooss()
{
    return cuatroDadooss;
}

///vector<int> n <- atributo de esta función anterior

void Dados::lanzarDadosFACIL()
{
    srand(time(0));

    // se va a reutilizar el mismo vector para todos las fichas entonces toca limpiarlo:
    cuatroDadooss.clear();

    // Generar exactamente 4 números aleatorios
    for (int i = 0; i < 4; i++) {
        int randomNum = rand() % 16; // Números entre 0-15
        cuatroDadooss.push_back(randomNum);
    }
}


void Dados::lanzarDadosMEDIO()
{
    srand(time(0));

    // se va a reutilizar el mismo vector para todos las fichas entonces toca limpiarlo:
    cuatroDadooss.clear();

    // Generar exactamente 4 números aleatorios
    for (int i = 0; i < 4; i++) {
        int randomNum = rand() % 25; // Números entre 0-25
        cuatroDadooss.push_back(randomNum);
    }
}

void Dados::lanzarDadosDIFICIL()
{
    srand(time(0));

    // se va a reutilizar el mismo vector para todos las fichas entonces toca limpiarlo:
    cuatroDadooss.clear();

    // Generar exactamente 4 números aleatorios
    for (int i = 0; i < 4; i++) {
        int randomNum = rand() % 32; // Números entre 0-31
        cuatroDadooss.push_back(randomNum);
    }
}

void Dados::mostrarResultados()
{


    for(int i = 0; i < 5; i++)
    {
        cout << cuatroDadooss[i] << endl;
    }
}

Dados::~Dados()
{
    //dtor
}
