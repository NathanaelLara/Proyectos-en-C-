#include <iostream>
#include <stdlib.h>

using namespace std;
// Clases, Atributos y Metodos
class Perro{
	private: // Atributos // Encapsulamiento
		// Abstracción
		int edad;
		string nombre;
	public: // Métodos
		Perro(int,string); // Constructor
		void comer();
		void correr();
};

// Creando el constructor

// Un constructor sirve para inicializar los atributos de las clases

Perro::Perro(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

// Haciendo los metodos

void Perro::comer(){
	cout<<nombre<<" esta comiendo purina"<<endl;
}

void Perro::correr(){
	cout<<nombre<<" esta corriendo en la casa a penas con "<<edad<<" semanas"<<endl;
}

int main(){
	Perro p1 = Perro(4,"Firulays");
	Perro p2 = Perro(2,"Syalurif");
	
	p1.comer();
	p2.correr();
	
	system("pause");
	return 0;
}
