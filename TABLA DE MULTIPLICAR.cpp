#include<iostream>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Inserte un numero del 1 al 12 para mostrarle la tabla de multiplicar de dicho numero: ";
		cin>>numero;	
	}while((numero<1) || (numero>12));
	
	for(int i=1;i<=12;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
		
	return 0;
}
