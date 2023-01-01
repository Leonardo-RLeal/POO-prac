#ifndef HISTORIA_H
#define HISTORIA_H
#include <iostream>
#include <string>

using namespace std;


class Historia{

    private:
        string exploracionF;
        string infoUrgencia;
        string Evolucion;
        string recetas;
        string tratamiento;
        string cuidados;
        string informeAlta;
    public:
        Historia();
        virtual ~Historia();

};

#endif // HISTORIA_H
