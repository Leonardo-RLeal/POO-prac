#include<iostream>
#include <fstream>
#include "Usuario.h"

using namespace std;

Usuario::Usuario():nombre{"Desconocido"},apellidoPaterno{"Desconocido"},apellidoMaterno{"Desconocido"},
                   clave{"Desconocida"},telefono{telefono},edad{0}{
   // cout<<"constructor por defecto"<<endl;
}
Usuario::~Usuario(){
    //cout<<"Destruyendo"<<endl;
}

void Usuario::imprimeDatos(){

    cout<<"\t\t\tNombre : "<<nombre<<"  "<<apellidoPaterno
        <<"  "<<apellidoMaterno
        <<"\n\t\tEdad : "<<edad<<"\t\tClave :"<<clave
        <<"\n\t\tFecha de nacimiento : "<<fechaNacimiento
        <<"\n\t\tNumero telefonico : "<<telefono<<endl;

}
void Usuario::recibeDatos(){
    string nombre;
    string apellido1;
    string apellido2;
    string clave;
    string BD;
    int edad;
    long telefono;


    cout<<"\t\t\tIngrese nombre : ";
    getline(cin,nombre);
    setNombre(nombre);
    cout<<"\n\t\t\tIngrese su apellido paterno : ";
    getline(cin,apellido1);
    setApellidoP(apellido1);
    cout<<"\n\t\t\tIngrese su apellido materno : ";
    getline(cin,apellido2);
    setApellidoM(apellido2);
    cout<<"\n\t\t\tIngrese su edad : ";
    cin>>edad;
    setEdad(edad);
    cin.ignore();

    cout<<"\n\t\t\tFecha de nacimiento:(dd-mm-aa) ";
    getline(cin,BD);
    setFechaNacimiento(BD);
    cout<<"\n\t\t\tIngrese su numero telefonico : ";
    cin>>telefono;
    setTelefono(telefono);



}


