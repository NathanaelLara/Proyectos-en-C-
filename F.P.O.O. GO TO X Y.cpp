/* Mostrar en pantalla los datos de una empresa comercial
Ejemplo:
Emp-Soluciones
Director: Juan Lopez
Telefono: (829) 452-5500
RNC:0000000-1
*/

#include<iostream>
#include<stdlib.h>
#include<windows.h>

void gotoxy(int,int);

using namespace std;

int main(){
	char empresa[10];
	char director[10];
	int telefono;
	double RNC;
	
	cout<<"Inserte la Empresa: ";cin>>empresa;
	cout<<"Inserte  el nombre del Director: ";cin>>director;
	cout<<"Inserte el telefono del Director: ";cin>>telefono;
	cout<<"Inserte el RNC de la Empresa: ";cin>>RNC;
	
	gotoxy(35,1);
	cout<<"\nLa Empresa es: "<<empresa<<endl;
	cout<<"\nEl Director es: "<<director<<endl;
	cout<<"\nEl telefono del Director es: "<<telefono<<endl;
	cout<<"\nEl RNC de la Empresa es: "<<telefono<<endl;
	
	return EXIT_SUCCESS;
}

void gotoxy ( int x, int y ){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
