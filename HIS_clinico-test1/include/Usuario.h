#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include <string>


using namespace std;

class Usuario
{
    private:
        string nombre;
        string apellidoPaterno;
        string apellidoMaterno;
        string clave;
        string fechaNacimiento;
        long long telefono;
        size_t edad;

    public:
        Usuario();

        virtual ~Usuario();
        inline void setClave(string clave){this->clave=clave;}
        inline string getClave(){return clave;}
        inline void setNombre(string nombre){this->nombre=nombre;}
        inline string getNombre(){return nombre;}
        inline void setApellidoP(string apellidoPaterno){this->apellidoPaterno = apellidoPaterno;}
        inline string getApellidoP(){return apellidoPaterno;}
        inline void setApellidoM(string apellidoMaterno){this->apellidoMaterno = apellidoMaterno;}
        inline string getApellidoM(){return apellidoMaterno;}
        inline void setEdad(size_t edad){this->edad = edad;}
        inline size_t getEdad(){return edad;}
        inline void setFechaNacimiento(string fechaNacimiento){this->fechaNacimiento=fechaNacimiento;}
        inline string getFechaNacimiento(){return fechaNacimiento;}
        inline void setTelefono(long long telefono){this->telefono = telefono;}
        inline long long getTelefono(){return telefono;}
        //virtual void ingresarSistema()=0;
        virtual void imprimeDatos();
        virtual void recibeDatos();

        friend class Medico;
        friend class Paciente;


};

#endif // USUARIO_H
