/* Declaracion de un puntero

Puntero: Es una variable que va a almacenar 
la direccion de memoria, en este caso, la posicion de num.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num,*dir_num; // *dir_num: guardara la direccion de memoria de la variable num.
	
	num=20;
	dir_num=&num; // &num = la direccion de memoria donde se esta guardada la variable num // &: AMPERSAND significa la direccion de memoria donde se esta guardando la variable.
	
	// Anteriormente le agregamos la posicion de mermoria de la variable num.
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de num: "<<dir_num<<endl; // Direccion de memoria donde se esta guardando la variable num de tipo entero.
		
	getch();
	return 0;
}
