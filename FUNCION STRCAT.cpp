#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char cadena1[]="Esto es una cadena ";
	char cadena2[]="de ejemplo";
	char cadena3[30];
	
	strcpy(cadena3,cadena1); //cadena3="Esto es una cadena"
	
	strcat(cadena3,cadena2); //cadena="Esto es una cadena de ejemplo"
	
	cout<<cadena3<<endl;
	
	getch();
	return 0;
}
