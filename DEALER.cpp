#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Vehiculos{
	private:
		string Marca1, Marca2, Marca3;
	public:
		Vehiculos(string, string, string, float, float, float);
};

Vehiculos::Vehiculos(string _marca1, _marca2, _marca3, float _precio1, float _precio2, float _precio3){
	Marca1 = _marca1;
	Marca2 = _marca2;
	Marca3 = _marca3;
	Precio1 = _precio1;
	Precio2 = _precio2;
	Precio3 = _precio3;
}

int main(){
	string marca1, marca2, marca3;
	float opcion1 = 30000, opcion2 = 50000, opcion3 = 20000, capital = 52000, compra = 0, capital_final;
	
	do{
	if (compra > 10000){
		cout<<"Usted se paso! ahora salga y reingrese todo"<<endl;
	}
	
	cout<<"DEALER"<<endl;
	cout<<"CARTERA: US$52.000,00"<<endl;
	cout<<"SELECCIONE EL AUTO DESEADO: "<<endl;
	
	cout<<"\n1. TOYOTA COROLLA 2020 DE TRANSMISION AUTOMATICA US$13.000,00"<<endl;
	cout<<"2. TOYOTA RAV4  2020 DE TRANSMISION AUTOMATICA US$17.000,00"<<endl;
	cout<<"3. TOYOTA HILUX 2020 DE TRANSMISION AUTOMATICA US$22.000,00"<<endl;
	cout<<"4. COMPRAR"<<endl;
	cout<<"5. SALIR"<<endl;
	cin>>opcion;
	
	switch(opcion){
	case 1: compra = compra + opcion1;
			cout<<"VALOR RESTANTE: US$"<<capital-compra<<endl;
			cout<<"SELECCIONE "<<endl;
			break;
	case 2: compra = compra + opcion2;
			cout<<"VALOR RESTANTE: US$"<<capital-compra<<endl;
			cout<<"SELECCIONE "<<endl;
			break;
	case 3: compra = compra + opcion3;
			cout<<"VALOR RESTANTE: US$"<<capital-compra<<endl;
			cout<<"SELECCIONE "<<endl;
			break;
	case 4:	cout<<"GRACIAS POR SU COMPRA"<<endl;
			cout<<"VALOR PAGADO US$"<<compra<<endl;
			cout<<"VALOR RESTANTE: US$"<<capitalfinal<<endl;			
			cout<<"VUELVA PRONTO";
			break;
	}
		system("cls");
	} while ( opc != 4);
	
	system("pause");
	getch();
	return 0;
}
