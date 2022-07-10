#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char Nombre [30], Direccion[30],Telefono[30];
	int n1/*Mate*/,n2/*Natural*/,n3/*Sociale*/,n4/*Espa*/,n5/*ExamenPrueba*/,n6/*final*/,p1,p2,p3,p4;


	 		
	 cout<<"1.-Registrar Nuevo\n";
	 cout<<"2.-Registrar Alunmo 1\n";
	 cout<<"3.-Registrar Alumno 2\n";		
     cout<<"Seleciona una Opcion\n";
     cin>>opc;
	 switch(opc)	{
			
 		case 1:/*Datos del que se registra*/
 		
 			 		    fflush(stdin);//limbiar la memoria cache
				        cout<<"Nombre Completo:             \n";
						gets(Nombre);
						cout<<"Direccion:                   \n";
						gets(Direccion);
				  		cout<<"Telefono:                    \n";
						gets(Telefono);  
					 //Notas
						cout<<"\nIngresa la nota de Naturales:\t";cin>>n2;
						cout<<"\nIngresa la nota del Examen de Naturales:\t";cin>>m2;
						cout<<"\nIngresa la nota de Matematicas:\t";cin>>n1;
						cout<<"\nIngresa la nota del Examen de Matematicas:\t";cin>>m1;
						cout<<"\nIngresa la nota de Sociales:\t";cin>>n3;
						cout<<"\nIngresa la nota del Examen de Sociales:\t";cin>>m3;
						cout<<"\nIngresa la nota de Espannol:\t";cin>>n4;
						cout<<"\nIngresa la nota del Examen de Espannol:\t";cin>>m4;
			
						n2=(n2*0.7)+m2;  //Guarda el resultado de la nota final
						n1=(n1*0.7)+m1;  //Es la suma del resultado de notal X 0.7
						n3=(n3*0.7)+m3;  //y se le suma la nota del examen (M3)
						n4=(n4*0.7)+m4;
						
						cout<<"\nTu Nota Final de Naturales Es: \t"<<n2;
						if(n2>=70){
							cout<<"\nAprobaste";
						}else{
							cout<<"\nReprobaste";
						}
						cout<<"\n\nNota de Matematicas\t"<<n1;
						if(n1>=70){
							cout<<"\nAprobaste";
						}else{
							cout<<"\nReprobaste";
						}
						cout<<"\n\nNota de Sociales\t"<<n3;
						if(n3>=70){
							cout<<"\nAprobaste";
						}else{
							cout<<"\nReprobaste";
						}
						cout<<"\n\nNota de Espannol\t"<<n4;
						if(n4>=70){
							cout<<"\nAprobaste";
						}else{
							cout<<"\nReprobaste";
						}
						
		break;
		
		case 2:                     //Alumno 1	
				        cout<<"Nombre Completo:    Alumno1  \n";
						cout<<"Direccion:     Haina         \n";
				  		cout<<"Telefono 8294416236           \n";
					 //Notas
						cout<<"\nIngresa la nota de Naturales:\t";cin>>n2;
						cout<<"\nIngresa la nota del Examen de Naturales:\t";cin>>m2;
						cout<<"\nIngresa la nota de Matematicas:\t";cin>>n1;
						cout<<"\nIngresa la nota del Examen de Matematicas:\t";cin>>m1;
						cout<<"\nIngresa la nota de Sociales:\t";cin>>n3;
						cout<<"\nIngresa la nota del Examen de Sociales:\t";cin>>m3;
						cout<<"\nIngresa la nota de Espannol:\t";cin>>n4;
						cout<<"\nIngresa la nota del Examen de Espannol:\t";cin>>m4;
		
				   
		break;
		
		case 3: //alum 222
			            cout<<"Nombre Completo:    Alumno2     \n";
						cout<<"Direccion:     Santiago         \n";
				  		cout<<"Telefono 6842345454             \n";
					 //Notas
						cout<<"\nIngresa la nota de Naturales:\t";cin>>n2;
						cout<<"\nIngresa la nota del Examen de Naturales:\t";cin>>m2;
						cout<<"\nIngresa la nota de Matematicas:\t";cin>>n1;
						cout<<"\nIngresa la nota del Examen de Matematicas:\t";cin>>m1;
						cout<<"\nIngresa la nota de Sociales:\t";cin>>n3;
						cout<<"\nIngresa la nota del Examen de Sociales:\t";cin>>m3;
						cout<<"\nIngresa la nota de Espannol:\t";cin>>n4;
						cout<<"\nIngresa la nota del Examen de Espannol:\t";cin>>m4;
			
		break;
		
		default:
			cout<<"\nUsted no uso una opcion valida";
		break;
			 		}	
	 



getch();
return 0;
}

