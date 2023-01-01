#include<fstream>
#include "Paciente.h"

using namespace std;
Paciente::Paciente():Usuario::Usuario(),NSS{12345678}
{
    //ctor
}
Paciente::Paciente(const Paciente &otro){
    nombre=otro.nombre;
    apellidoPaterno=otro.apellidoPaterno;
    apellidoMaterno=otro.apellidoMaterno;
    clave=otro.clave;
    edad=otro.edad;
    NSS=otro.NSS;
    fechaNacimiento=otro.fechaNacimiento;
}


Paciente::~Paciente()
{
    //dtor
}
void Paciente::imprimeDatos(){
    cout<<"\n\t\t\t\t\t---------------------------------------"
    <<"\n\t\t\t\t\t\tDATOS DEL PACIENTE\n\n";
    cin.ignore();
    Usuario::imprimeDatos();
    cout<<"\n\t\tNumero de Seguridad Social : "<<NSS<<endl;

    ofstream archivo;
    string fileName="Paciente_"+getNombre()+getApellidoP();
    archivo.open(fileName.c_str(),ios::out);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo<<nombre<<"\n"<<getApellidoP()<<"\n"<<getApellidoM()<<"\n"
           <<getEdad()<<"\n"<<getTelefono()<<"\n"<<NSS<<endl;

    archivo.close();

}

void Paciente::recibeDatos(){

    cout<<"\n\t\t\t\t\t---------------------------------------"
    <<"\n\t\t\t\t\tREGISTRAR PACIENTE\n\n";
    long NSS;
    Usuario::recibeDatos();
    cout<<"\n\t\t\tNumero de Seguridad Social : ";
    cin>>NSS;
    setNSS(NSS);


}
