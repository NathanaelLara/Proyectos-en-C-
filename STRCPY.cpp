#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena[20];
	char array[20];
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(cadena,20,'\n');
	
	strcpy(array,cadena);
	
	cout<<array<<endl;
	
	getch();
	return 0;
}
