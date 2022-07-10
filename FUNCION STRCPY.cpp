//Copiar el contenido de una cadena a otra - Funcion STRCPY()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[]="Nathanael";
	char nombre2[20];
	
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	getch();
	return 0;
}
