#include<iostream>

using namespace std;

int main(){
	int numeros[2]={351,489},suma=0;
	
	for(int i=0;i<2;i++){
		suma=suma+numeros[i];
	}
	
	cout<<"La suma de los numeros del vector es: "<<suma<<endl;
	
	return 0;
}
