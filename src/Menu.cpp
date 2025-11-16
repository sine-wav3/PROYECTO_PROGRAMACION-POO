#include "Menu.h"
#include "Tablero.h"
#include <iostream>
#include <string>

using namespace std;

Menu::Menu()
{
    //ctor
}

Menu :: Menu(int opcion){
    this -> opcion = opcion;
}

void Menu::setOpcion(int opcion){this -> opcion = opcion;}
int Menu::getOpcion(){return opcion;}

void Menu::nuevaPartida(int opcion){
    cout << "" << endl;
}
void Menu::eliminarPartida(int opcion){}
void Menu::cargarPartida(int opcion){}
void Menu::salirDeLaPartida(int opcion){}


Menu::~Menu()
{
    //dtor
}
