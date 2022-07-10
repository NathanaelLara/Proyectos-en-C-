#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char a;
	
	printf("Escriba una vocal: ");
	a=getchar();
	printf("\n");
	
	printf("La vocal es: ");
	while(a!=EOF)
	{
	putchar(a);
	a=getchar();
	}
	
	getch();
	return 0;
}
