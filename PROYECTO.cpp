/*El estudiante deberá entregar un proyecto donde se usen los objetos de una clase
llamada vehículos, el estudiante es libre ya sea en introducir las informaciones o 
imprimir una lista ya generada. El estudiante deberá mostrar una lista de vehículo 
con los precios, poder hacer una compra y sumar los precios. Se deberá tener mínimo 
3 vehículo El cliente es libre del uso de las funciones y procesos.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Vehiculos{
	private:
		string Marca1, Marca2, Marca3;
		float precio1, precio2, precio3;
	public:
		Vehiculos(string, string, string, float, float, float);
};


Vehiculos::Vehiculos(string _marca1, _marca2, _marca3, float _precio1,
 float _precio2, float _precio3){
 	Marca1=_marca1;
 	Marca2=_marca2;
 	Marca3=_marca3;
 	Precio1=_precio1;
 	Precio2=_precio2;
 	Precio3=_precio3;
}

int main(){
	string marca1, marca2, marca3;
	float op1=30000, op2=50000, op3=20000, cap=100000, compra= 0, capfinal;


	do{
	if(compra > 10000){
		cout<<"Usted se paso! ahora salga y reingrese todo"<<endl;
	}
		
	cout<<"Bienvenido a una tienda de vehiculos"<<endl;
	cout<<"Usted tiene 100,000 peso"<<endl;
	cout<<"Que carros desea: "<<endl;
	
	cout<<"\n1. Mustasang 30000$ Doble cabina"<<endl;
	cout<<"2. Nissan 50000$ Doble cabina"<<endl;
	cout<<"3. Toyota 20000$ Una sola cabina"<<endl;
	cout<<"4. Comprar"<<endl;
	cout<<"5. Salir"<<endl<<endl;

	cin>>op;
	switch(op){
	case 1:
		compra= compra+op1;
		cout<<"Te quedan: $"<<cap-compra<<endl;
		cout<<"Siga seleccionando! "<<endl<<endl;
		system("pause");
		break;
	case 2:
		compra= compra+op2;
		cout<<"Te quedan: $"<<cap-compra<<endl;
		cout<<"Siga seleccionando! "<<endl<<endl;
		system("pause");
		break;
	case 3:
		compra= compra+op3;
		cout<<"Te quedan: $"<<cap-compra<<endl;
		cout<<"Siga seleccionando! "<<endl<<endl;
		system("pause");
		break;
	case 4:
			cout<<"Su compra ha sido un exito"<<endl;
			cout<<"Usted pago: $"<<compra<<endl;
			cout<<"Y le sobraron: $"<<capfinal<<endl<<endl;			
	
			cout<<"Ahora tiene un carro hermoso! bendiciones y hasta nunca";
		system("pause");
		break;
	}
		system("cls");
	} while ( op != 4);
	
	system("pause");
	getch();
	return 0;
	
	
	system("pause");
	getch();
	return 0;
}
