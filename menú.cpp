#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
#include "codigo.h"
//#include "calculo.h"
int main()
{
	//int dn, mn, an,da, ma, aa; 
	float peso, estatura, imc;
	Persona alber;
	int fa[3],fn[3],edad[3];
	int op,flag;
	
	do{
	system("cls");
	cout<<"datos personales"<<endl<<endl;
	cout<<"1.- Ingresar y mostrar los datos personales (cedula, nombres, fecha de nacimiento, peso, estatura) \n";
	cout<<"2.- Calcular la edad exacta del usuario \n";
	cout<<"3.- Mostrar el indice de masa corporal y recomendaciones \n"; 
	cout<<"4.- guardado de los datos \n";
	cout<<"5.- lectura de los datos\n";
	cout<<"0.- Salir del menu \n\n";
        cout<<" Ingrese una opcion : "; cin>>op;
	switch(op){
				case 1:
	//ESTA FUNCION PERMITE ALMACENAR LOSDATOS DEL USUARIO.
	cout<<"\nEsta opcion permite recopilar los datos personales del usuario";
	alber.ingresar();
    alber.mostrar(); 
		break;
	        case 2:
       //ESTA FUNCION PERMITE CALCULAR LA EDAD DEL USUARIO.
	cout<<"\nEsta opcion permite calcular la edad del usuario\n\n";
    alber.digitar(fa);
		break;
      }
    if(op!=0){
			    cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);
	
	system("pause");

	return(0);

}
