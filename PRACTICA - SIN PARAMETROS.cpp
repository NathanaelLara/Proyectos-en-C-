#include<iostream>

using namespace std;

float division();

int main(){
	
	division();
	
	return 0;
}

float division(){
	float num1,num2,resultado;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	resultado=num1/num2;
	
	cout<<"\nEl resultado es: "<<resultado;	
}
