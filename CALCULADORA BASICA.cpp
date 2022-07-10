#include <iostream>

using namespace std;

int suma(int nume1, int nume2, int r);
int resta(int num1,int num2, int re);
int multiplicacion(int n1, int n2, int res);
float division(float x, float y, float resul);

int main(){
 int a,b,c,opc;
 
	cout<<"\tCALCULADORA BASICA"<<endl;
	cout<<"Si desea sumar pulse 1"<<endl;
	cout<<"Si desea restar pulse 2"<<endl;
	cout<<"Si desea multiplicar pulse 3"<<endl;
	cout<<"Si desea dividir pulse 4"<<endl;
	cout<<"\nOpcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
				cout<<"\nDigite un numero:";
				cin>>a;
				cout<<"Digite otro numero:";
				cin>>b;
				cout<<endl<<suma(a,b,c); break;
 		case 2:
				cout<<"\nDigite un numero:";
				cin>>a;
				cout<<"Digite otro numero:";
				cin>>b;
				cout<<endl<<resta(a,b,c); break;	
 		case 3:
				cout<<"\nDigite un numero:";
				cin>>a;
				cout<<"Digite otro numero:";
				cin>>b;
				cout<<endl<<multiplicacion(a,b,c); break;
 		case 4:
				cout<<"\nDigite un numero:";
				cin>>a;
				cout<<"Digite otro numero:";
				cin>>b;
				cout<<endl<<division(a,b,c); break;
		default: cout<<endl<<"Se equivoco de opcion en el menu"; break;
 }
 
 return 0;
}

int suma(int nume1, int nume2, int r){
	
	r=nume1+nume2;
	return r;
}

int resta(int num1,int num2, int re){
	re=num1-num2;
	return re;
}

int multiplicacion(int n1,int n2,int res){
	res=n1*n2;
	return res;
}

float division(float x,float y,float resul){
	resul=x/y;
	return resul;
}
