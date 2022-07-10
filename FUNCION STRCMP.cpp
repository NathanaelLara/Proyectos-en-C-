#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena1[]="Cadena";
	char cadena2[]="Cadena";
	
	if(strcmp(cadena1,cadena2)==0){ //
		cout<<"Ambas cadenas son semejantes";
	}
	
	//==1 signfica que ambas cadenas son diferentes
	//!= 0 distinto de cero
	// >0 para saber alfabeticamente si una palabra esta despues de otra
	
	getch();
	return 0;
}
