#include<stdio.h>
#include<conio.h>

int main(){

	char nombre[10];
	
	printf("Introduzca su nombre: ");
	gets(nombre);
	printf("Bienvenido %s",nombre);
	printf("\n%c",nombre[1]);
	printf("\n%c",nombre[4]);
	
	getch();
	return 0;
}
