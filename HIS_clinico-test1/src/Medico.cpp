#include <fstream>
#include "Medico.h"

using namespace std;

Medico::Medico():Usuario::Usuario(){
    this->accesID = "12345";


}
Medico::Medico(const Medico &otro)
{
    nombre=otro.nombre;
    apellidoPaterno=otro.apellidoPaterno;
    apellidoMaterno=otro.apellidoMaterno;
    clave=otro.clave;
    edad=otro.edad;
    fechaNacimiento=otro.fechaNacimiento;
    accesID=otro.accesID;

}


Medico::~Medico()
{
    //dtor
}
void Medico::escribePaciente(int num){

    listaPacientes[num].recibeDatos();

}
void Medico::recibeDatos()
{

    string ID;

    char reemplazar{'s'};
    if(getNombre()!="Desconocido"){
        cout<<"Este usuario ya se encuentra registrado\n"
            <<"Desea reeplazarlo? (s/n): ";
        cin>>reemplazar;
        cin.ignore();
    }
    if(reemplazar=='s'){
    cout<<"\n\t\t\t\t\t---------------------------------------"
    <<"\n\t\t\t\t\t\tINGRESAR DATOS DEL MEDICO\n\n";
    cin.ignore();
    Usuario::recibeDatos();
    cin.ignore();
    cout<< "\n\t\t\tEscriba ID : ";
    //cin.ignore();
    getline(cin,ID);
    setID(ID);
    cout << endl;
    }

    ofstream archivo;
    string fileName="Medico_"+getNombre()+getApellidoP();
    archivo.open(fileName.c_str(),ios::out);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo<<nombre<<"\n"<<getApellidoP()<<"\n"<<getApellidoM()<<"\n"
           <<getEdad()<<endl;

    archivo.close();


}

void Medico::imprimeDatos(){
    cout<<"\n\t\t\t\t\t---------------------------------------"

    <<"\n\t\t\t\t\tDATOS DEL MEDICO\n\n";
    Usuario::imprimeDatos();
    cout<<"\n\t\tID : "<<accesID
        <<"\n\t\t\t\tLista de pacientes :\n";

    for(int i{0};i<3;i++){
        if(listaPacientes[i].getNombre()!="Desconocido"){
            cout<<"\t\t\t\t\t@  "<<listaPacientes[i].getNombre()<<" "
                <<listaPacientes[i].getApellidoP()<<" "
                <<listaPacientes[i].getApellidoM()<<endl;
        }else{
            cout<<"\t\t\t\t\t@  Sin asignar."<<endl;
        }
    }



}
void Medico::leePaciente(int num){
    listaPacientes[num].imprimeDatos();
}
