#include<iostream>

using namespace std;

float division();

float division2(float a, float b, float c);
	
int main(){
	float var1, var2, resultado;
	
	cout<<"Digite los datos";
	cin>>var1>>var2;
	
	//division();
	cout<<division2(var1,var2,resultado);

	return 0;
}

float division(){
	float num1,num2,resultado;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	resultado=num1/num2;
	
	cout<<"\nEl resultado es: "<<resultado;
}

float division2(float a, float b, float c){
c=a/b;

return c;
}
