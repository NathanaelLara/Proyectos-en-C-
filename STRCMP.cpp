#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char cadena1[20],cadena2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(cadena1,20,'\n');
	
	cout<<"\nDigite otra palabra: ";
	cin.getline(cadena2,20,'\n');
	
	if(strcmp(cadena1,cadena2)==0){
		cout<<"\nAmbas cadenas son semejantes";
	}
	else if(strcmp(cadena1,cadena2)>0){
		cout<<"\nLa primera cadena es mayor";
	}
	else {
		cout<<"\nLa segunda cadena es mayor";
	}
	
	getch();
	return 0;
}
