#ifndef TABLERO_H
#define TABLERO_H


class Tablero
{
    public:
        Tablero();
        Tablero(int dimensionDelTablero);
        virtual ~Tablero();

        void setDimensionDelTablero(int dimensionDelTablero);
        int getDimensionDelTablero();
        void dibujarTablero(int dimensionDelTablero);


    protected:

    private:
        int dimensionDelTablero;
};

#endif // TABLERO_H
