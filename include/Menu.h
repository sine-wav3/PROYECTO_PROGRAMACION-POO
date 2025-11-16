#ifndef MENU_H
#define MENU_H


class Menu
{
    public:
        Menu();
        Menu(int opcion);
        virtual ~Menu();

        void setOpcion(int opcion);
        int getOpcion();

        void nuevaPartida(int opcion);
        void eliminarPartida(int opcion);
        void cargarPartida(int opcion);
        void salirDeLaPartida(int opcion);

    protected:

    private:
        int opcion;
};

#endif // MENU_H
