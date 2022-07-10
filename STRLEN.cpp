//Longitud de una cadena de caracteres - Funcion strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[20];
	int longitud=0;
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(palabra,20,'\n');
	
	longitud = strlen(palabra);
	
	if(longitud>10){
		cout<<"\nLos digitos dentro de la cadena son: "<<longitud<<endl;
	} else{
		cout<<"\nSu  cadena no supera los 10 caracteres: "<<endl;
	}
	
	getch();
	return 0;
}
