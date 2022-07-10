// Clase en C++

#include <iostream>
#include <stdlib.h>

using namespace std;

class Carro{
	private: // Encapsulamiento // Abstracción  // Atributos y Métodos
		int anio;
		string nombre;
	public:
		Carro(int,string); // Constructor
		void arrancar();
		void correr();
};

// Inicializando el constructor que nos sirve para inicializar los atributos

Carro::Carro(int _anio,string _nombre){
	anio = _anio;
	nombre = _nombre;
}

// Creando los métodos

void Carro::arrancar(){
	cout<<"El "<<nombre<<" esta arrancando para comenzar a correr la carrera"<<endl;
}

void Carro::correr(){
	cout<<"sin embargo, el "<<nombre<<" no llego a acelerar y se apago porque es del "<<anio<<" y esta muy viejo"<<endl;
}

// Instanciando o creando los objetos

int main(){
	
	// Clase // Objeto // Constructor
	
	Carro c1 = Carro(70,"Volkswagen");
	Carro c2 = Carro(70,"Volkswagen");
	
	// Método
	
	c1.arrancar();
	c2.correr();

	system("pause");
	return 0;
}
