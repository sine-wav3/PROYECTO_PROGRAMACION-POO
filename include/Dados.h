#ifndef DADOS_H
#define DADOS_H
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Dados
{
    public:
        Dados();
        Dados(int numeros_para_los_dados, vector<int> cuatroDadooss);
        virtual ~Dados();
        /// setter y getter para 1er atributo
        void setNumeros_para_los_dados(int numeros_para_los_dados);
        int getNumeros_para_los_dados();

        /// setter y getters para 2do atributo
        void setCuatroDadooss(vector<int> cuatroDadooss);
        vector<int> getCuatroDadooss();

        ///metodos de la clase
        void lanzarDadosFACIL();
        void lanzarDadosMEDIO(); /// lanzar dados para cada modo de juego
        void lanzarDadosDIFICIL();

        void mostrarResultados();


    protected:
        int numeros_para_los_dados;
        vector<int> cuatroDadooss;

    private:
        /// int random;
        /// vector<int> cuatroDadooss;
};

#endif // DADOS_H
