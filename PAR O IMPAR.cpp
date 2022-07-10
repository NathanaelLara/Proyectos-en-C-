#include<iostream>

using namespace std;

int main(){
	long long int num;
	
	cout<<"Inserte un numero: ";
	cin>>num;
	
	if(num==0){
		cout<<"Es cero";
	}
	else if(num%2==0){
		cout<<"Es par";
	}
	else{
		cout<<"Es impar";
	}
	
	return 0;
}
