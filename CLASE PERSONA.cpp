// Clase en C++

#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
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
	
	// Clase // Objeto // Constructor
	
	Persona p1 = Persona(20,"Nathanael");
	Persona p2 = Persona(19,"Maria");
	Persona p3 = Persona(18,"Juan");
	
	// Método
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	system("pause");
	return 0;
}
