#include <iostream>
#include <string>
#include <vector>
#include "Menu.h"
/// PROYECTO FINAL PROGRAMACIÓN ORIENTADA A OBJETOS
/// INTEGRANTES:
/// DANIELA FRANCO IBARRA -
/// JOHN KENNEDY ALGO -
/// JUAN ALEJANDRO MÁRQUES -
using namespace std;

int main()
{
    int opcion_main;
    Menu menu_main;

    cout << "Bienvenido a carrera al centro!" << endl;
    cout << "elija una opcion: " << endl;
    cout << "1. nueva partida, 2. eliminar partida, 3. cargar partida, 4. salir. " << endl;



    switch (opcion_main){
        case 1:
            menu_main.nuevaPartida(opcion_main);
            break;
        case 2:
            menu_main.eliminarPartida(opcion_main);
            break;
        case 3:
            menu_main.cargarPartida(opcion_main);
            break;
        case 4:
            menu_main.salirDeLaPartida(opcion_main);
            break;
        default:
            cout << "this is a test" << endl;
            break;
    }
}
