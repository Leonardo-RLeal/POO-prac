#include "clinicoHIS.h"

clinicoHIS::clinicoHIS(){

    numMedicos = static_cast<int>(((sizeof listaMedicos)/(sizeof listaMedicos[0])));

}
clinicoHIS::clinicoHIS(const clinicoHIS &otro){
    numMedicos=otro.numMedicos;
    for(int i{0};i<numMedicos;i++){
        listaMedicos[i]=otro.listaMedicos[i];
    }

}


clinicoHIS::~clinicoHIS()
{
    //dtor
}
void clinicoHIS::setNumM(){
    numMedicos = static_cast<int>(((sizeof listaMedicos)/(sizeof listaMedicos[0])));
}
void clinicoHIS::verListaMedicos(){

    for(int i{0};i<numMedicos;i++){
        cout<<"\t\t\t( "<<i+1<<" )  ";
        if(listaMedicos[i].getNombre()=="Desconocido"){
            cout<<"Sin asignar."<<endl;
        }else{

            cout<<listaMedicos[i].getNombre()<<" "
            <<listaMedicos[i].getApellidoP()<<" "
            <<listaMedicos[i].getApellidoM()<<"."<<endl;
        }
    }

}

void clinicoHIS::registrarMedico(){

    int opcion;
    do{
        cout<<"\n\t\t\tREGISTRO DE MEDICOS\n"<<endl;
        this->verListaMedicos();
        cout<<"\n\t\t\tSeleccione un medico para registrar su informacion : ";


        cin>>opcion;
        system("cls");
        if(opcion<1 || opcion>numMedicos){
            cout<<"\n\t\t\tOpcion no valida, intente de nuevo."<<endl;
            system("pause");
            system("cls");
        }else{
            listaMedicos[opcion-1].recibeDatos();
            system("pause");
            system("cls");
        }
    }while(opcion<1 || opcion>numMedicos);

}

void clinicoHIS::verInfoMedico(){
    int opcion;
    do{
        cout<<"\n\t\t\tREGISTRO DE MEDICOS\n"<<endl;
        this->verListaMedicos();
        cout<<"\n\t\t\tSeleccione un medico para ver su informacion : ";

        cin>>opcion;
        system("cls");
        if(opcion<1 || opcion>numMedicos){
            cout<<"\n\t\t\tOpcion no valida, intente de nuevo."<<endl;
            system("pause");
            system("cls");
        }else{

            listaMedicos[opcion-1].imprimeDatos();
            system("pause");
            system("cls");
        }

    }while(opcion<1 || opcion>numMedicos);

}


