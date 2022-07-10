#include<iostream>

using namespace std;

int main(){
	int numeros[2]={597,187},multiplicacion=1;
	
	for(int i=0;i<2;i++){
		multiplicacion=multiplicacion*numeros[i];
	}
	
	cout<<"La multiplicacion de los numeros del vector es: "<<multiplicacion<<endl;
	
	return 0;
}
