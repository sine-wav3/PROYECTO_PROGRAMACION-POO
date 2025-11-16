#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador
{
    public:
        Jugador();
        Jugador(int puntosDeVida);
        virtual ~Jugador();

    protected:

    private:
        int puntosDeVida;
};

#endif // JUGADOR_H
