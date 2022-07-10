#include <iostream>
#include <conio.h>

using namespace std;

class Vehiculo{
	private: // Encapsulamiento // Abstracción  // Atributos y Métodos 
		int edad;
		string nombre;
	public:
		Persona(int,string); // Constructor
		void leer();
		void correr();
};

// Inicializando el constructor que nos sirve para inicializar los atributos

Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

// Creando los métodos

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" anios"<<endl;
}

// Instanciando o creando los objetos

int main(){
	char matricula, nombre;
	int n1, n2, n3, nota_final;
	
	cout<<"\nMATRICULA: 2019-0207";
	cin>>matricula;
	cout<<"\nNOMBRE: Nathanael";
	cin>>nombre;
	
	cout<<"\nDIGITE LA NOTA DEL PRIMER PARCIAL: ";
	cin>>n1;
	cout<<"\nDIGITE LA NOTA DEL SEGUNDO PARCIAL: ";
	cin>>n2;
	cout<<"\nDIGITE LA NOTA DEL TERCER PARCIAL: ";
	cin>>n3;
	
	if (nota_final>=45){
		cout<<"\nAPROBADO"<<endl;
	} if (nota_final<45){
		cout<<"\nREPROBADO"<<endl;
	}
	
	getch();
	return 0;
}

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
	
	getch();
	return 0;
}
