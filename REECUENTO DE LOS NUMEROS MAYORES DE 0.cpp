#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num,recuento=0;
	
	do{
		cout<<"Inserte un numero: "; 
		cin>>num;
		if(num>0){
			recuento++;
		}
	}while(num != 0);
	
	cout<<"Los numeros mayores que 0 son: "<<recuento<<endl;
	
	getch();
	return 0;
}
