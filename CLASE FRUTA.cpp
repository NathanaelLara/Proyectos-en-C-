#include <iostream>
#include <stdlib.h>

using namespace std;

class Fruta{
	private:
		string nombre,color;
	public:
		Fruta(string);
		void alimenta();
		void adorna();
};

Fruta::Fruta(string _nombre,string _color){
	nombre = _nombre;
	color = _color;
}

void Fruta::alimenta(){
	cout<<"La"<<nombre<<" es una fruta que alimenta muy bien"<<endl;
}

void Fruta::adorna(){
	cout<<"El"<<nombre<<" adorna la creacion de Dios"<<endl;
}

int main(){
	Fruta _fruta = Fruta("Naranja","Naranja");
	
	_fruta.nombre();
	
	system("pause");
	return 0;
}
