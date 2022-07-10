#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char cadena1[]="Hola que tal ";
	char cadena2[30];
	
	cout<<"Cual es tu nombre: ";
	cin.getline(cadena2,30,'\n');
	
	strcat(cadena1,cadena2);
	
	cout<<cadena1<<endl;
	
	getch();
	return 0;
}
