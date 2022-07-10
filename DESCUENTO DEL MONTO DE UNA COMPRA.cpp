#include<iostream>

using namespace std;

int main(){
	int opc,monto;
	
	cout<<"\tBienvenido a D'Nathanael Boutique"<<endl;
	cout<<"1. T-Shirt Polo M con un precio de RD$1,600.00"<<endl;
	cout<<"2. Camisa Funk Jeans M con un precio de RD$600.00"<<endl;
	cout<<"3. Pantalon Jean Levi con un precio de RD$400.00"<<endl;
	cout<<"\nOpcion: "; 
	cin>>opc;
	
	cout<<"\nInserte el monto de su compra: "; cin>>monto;
	
	switch(opc){
		case 1: if (monto>1000)
				// monto=monto*0.20-monto;
				monto=monto-(monto*0.20);
				cout<<"\nSu compra con un 10% de descuento es: "<<monto; break;
		case 2: if ((monto>500) && (monto<=1000))
				monto=monto-(monto*0.10);
				cout<<"\nSu compra con un 20% de descuento es: "<<monto; break;
		case 3: if (monto<=500)
				cout<<"\nNo hay descuento, su total a pagar es: "<<monto; break;
		default: cout<<"\nSe equivoco de opcion en el menu"; break;
	}
	
	return 0;
}
