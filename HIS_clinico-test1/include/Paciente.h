#ifndef PACIENTE_H
#define PACIENTE_H
#include "Usuario.h"
#include "Historia.h"


class Paciente:public Usuario
{
    private:
        Historia expediente;
        //string estadoCivil;
        long long NSS;


    public:
        Paciente();
        Paciente(const Paciente&);
        virtual ~Paciente();
        void imprimeDatos()override;
        void recibeDatos()override;
        inline void setNSS(long long NSS){this->NSS = NSS;}
        inline long long getNSS(){return NSS;}

        //friend int main();

       // friend class Medico;
        //friend class clinicoHIS;



};

#endif // PACIENTE_H
