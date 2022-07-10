//Longitud de una cadena de caracteres - Funcion strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Palabra";
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout<<"Los digitos dentro de la cadena son: "<<longitud<<endl;
	
	getch();
	return 0;
}
