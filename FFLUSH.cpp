// Buffer: lugar donde se almacenara algo que se utilizara despues

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){
	int x,y;
	
	printf("Digite una vocal: ");
	fflush(stdin);
	scanf("%d",&x);
	fflush(stdin);
	
	printf("Digite otra vocal: ");
	scanf("%d",&y);
	fflush(stdin);
	
	printf("\n a= %d",&x);
	printf("\n b= %d",&y);
	
	getch();
	return 0;
}
