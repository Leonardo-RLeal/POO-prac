#ifndef CLINICOHIS_H
#define CLINICOHIS_H
#include "Medico.h"


class clinicoHIS
{
    private:
        int numMedicos;
        Medico listaMedicos[15];

    public:
        clinicoHIS();
        clinicoHIS(const clinicoHIS&);
        virtual ~clinicoHIS();
        void setNumM();
        inline size_t getNumM(){return numMedicos;}
        void verListaMedicos();
        void registrarMedico();
        void verInfoMedico();


        friend class Medico;
        friend class Paciente;
        friend void ingreso(clinicoHIS);
        friend void opcionesMedico(clinicoHIS);
        friend int main();

};

#endif // CLINICOHIS_H
