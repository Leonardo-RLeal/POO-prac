#include <iostream>
#include <string>
#include <cctype>
#include "Usuario.h"
//#include "Medico.h"
#include "Paciente.h"
#include "clinicoHIS.h"

using namespace std;

void registraUsuario();
void registrarPaciente(int,int);
void ingreso(clinicoHIS H);
void menu();
void opcionesAdminG(clinicoHIS H);
void opcionesMedico(clinicoHIS H);


int main(){
   clinicoHIS H1;

   H1.registrarMedico();
   H1.listaMedicos[0].escribePaciente(1);
   H1.verInfoMedico();
   H1.listaMedicos[0].listaPacientes[1].imprimeDatos();
    return 0;

}
void ingreso(clinicoHIS H){
    clinicoHIS H2;
    char Principal;
    do{
    char tipoUsuario;
    do{
        //H=H2;
        cout<<"\t\t\tTipo de Usuario\n\n";
        cout<<"\t\t 1) Administrador General"<<endl;
        cout<<"\t\t 2) Medico"<<endl;
        cout<<"\t\t 3) Paciente"<<endl;
        cout<<"\n\t\tElija una opcion : ";

        cin>>tipoUsuario;
        system("cls");

        switch(tipoUsuario){
            case '1':

                cout<<"OK Personal"<<endl;
                opcionesAdminG(H);
                break;
            case '2':
                opcionesMedico(H);
                //H.listaMedicos[1].escribePaciente(1);
                break;
            case 3:
                cout<<"OK Paciente"<<endl;
                //PaciecibeDatos();
                break;
            default:

                cout<<"Opcion no valida, intente de nuevo."<<endl;
        }


    }while(tipoUsuario!='1' && tipoUsuario!='2');
    cout<<"Desea Regresar al menu principal (s/n): ";
    cin>>Principal;
    //H2=H;
    system("cls");
    }while(tolower(Principal)=='s');

}

void menu(){

}
void opcionesAdminG(clinicoHIS H){
    char salir;
    do{
        int opcion;
        do{
            cout<<"\t\t\tSISTEMA DE INFORMACION HOSPITALARIA\n\n";
            cout<<"\t\t 1) Visualizar la informacion de un Personal medico"<<endl;
            cout<<"\t\t 2) Registrar la informacion del Personal Medico"<<endl;
            cout<<"\n\t\tElija una opcion : ";
            cin>>opcion;
            system("cls");

            switch(opcion){
                case 1:
                    H.verInfoMedico();
                    break;

                case 2:
                    H.registrarMedico();
                    break;

                default:
                    system("cls");
                    cout<<"Opcion no valida, intente de nuevo."<<endl;

            }
        }while(opcion>4 || opcion<1);

        cout<<"\n\t\t\tDesea salir del programa?  (s/n): ";
        cin>>salir;

    }while(tolower(salir)!='s');
}

void opcionesMedico(clinicoHIS H){
    char salir;
    do{
        int opcion;
        do{
            cout<<"\t\t\tSISTEMA DE INFORMACION HOSPITALARIA\n\n";
            cout<<"\t\t 1) Visualizar la informacion de un Paciente"<<endl;
            cout<<"\t\t 2) Registrar la informacion de un Paciente"<<endl;
            cout<<"\t\t 3) Visualizar mi informacion"<<endl;

            cout<<"\n\t\tElija una opcion : ";
            cin>>opcion;
            system("cls");

            switch(opcion){
                case 1:
                   // H.verInfoMedico();
                    break;

                case 2:
                    //H.registrarMedico();
                    break;
                case 3:
                    H.listaMedicos[2].imprimeDatos();

                    break;

                default:
                    system("cls");
                    cout<<"Opcion no valida, intente de nuevo."<<endl;

            }
        }while(opcion>4 || opcion<1);

        cout<<"\n\t\t\tDesea salir del programa?  (s/n): ";
        cin>>salir;

    }while(tolower(salir)!='s');


}



