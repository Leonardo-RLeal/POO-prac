#ifndef MEDICO_H
#define MEDICO_H
#include "Paciente.h"
#include "Usuario.h"
//#include "Paciente.h"


class clinicoHIS;
class Medico: public Usuario
{
    private:
        string accesID;
        Paciente listaPacientes[3];

    public:
        Medico();
        Medico(const Medico&);
        virtual ~Medico();
        inline void setID(string accesID){this->accesID = accesID;}
        inline string getID(){return accesID;}
        void escribePaciente(int);
        void recibeDatos()override;
        void imprimeDatos()override;
        void leePaciente(int);

        friend class clinicoHIS;
        friend class Paciente;
        friend void ingreso(clinicoHIS);
        friend int main();
        //friend void opcionesMedico(clinicoHIS);


};

#endif // MEDICO_H
