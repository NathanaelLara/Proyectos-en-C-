#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char nombre[15], apellido[15], edad[2];
	int n1/*Mat*/, n2/*Nat*/, n3/*Soc*/, n4/*Esp*/, n5/*Prueba Nacional*/, n6/*Nota Final*/, p1, p2, p3, p4, opc;
	
	cout<<"\tREGISTRO"<<endl;
	cout<<"1.-REGISTRAR ESTUDIANTE"<<endl;
	cout<<"2.-REGISTRAR LA NOTA DE JUAN"<<endl;
	cout<<"3.-REGISTRAR LA NOTA DE MARIA"<<endl;
	cout<<"\nOPCION: ";
	cin>>opc;
    
    switch(opc){
    	case 1: fflush(stdin);
				cout<<"\nNOMBRE: ";
				cin>>nombre;
				cout<<"\nAPELLIDO: ";
				cin>>apellido;
				cout<<"\nEDAD: ";
				cin>>edad;
				
				cout<<"\nDIGITE LA NOTA FINAL DE MATEMATICAS: ";
				cin>>n1;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE MATEMATICAS: ";
				cin>>p1;
				cout<<"\nDIGITE LA NOTA FINAL DE NATURALES: ";
				cin>>n2;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE NATURALES: ";
				cin>>p2;
				cout<<"\nDIGITE LA NOTA FINAL DE SOCIALES: ";
				cin>>n3;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE SOCIALES: ";
				cin>>p3;
				cout<<"\nDIGITE LA NOTA FINAL DE ESPANOL: ";
				cin>>n4;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE ESPANOL: ";
				cin>>p4;
				
				n1=(n1*0.7)+p1;
				n2=(n2*0.7)+p2;
				n3=(n3*0.7)+p3;
				n4=(n4*0.7)+p4;
				
				cout<<"\nLA NOTA TOTAL DE MATEMATICAS ES: "<<n1;
				
				if(n1>=70){
				cout<<"\nAPROBADO"<<endl;
				} else {
				cout<<"\nREPROBRADO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE NATURALES ES: "<<n2;
				
				if(n2>=70){
				cout<<"\nAPROBADO"<<endl;
				} else {
				cout<<"\nREPROBADO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE SOCIALES ES: "<<n3;
				
				if(n3>=70){
				cout<<"\nAPROBADO"<<endl;
				} else {
				cout<<"\nREPROBADO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE ESPANOL ES: "<<n4;
				
				if(n4>=70){
				cout<<"\nAPROBADO"<<endl;
				} else {
				cout<<"\nREPROBADO"<<endl;
				}		
		break;
				
		case 2: cout<<"\nNOMBRE: JUAN";
				cout<<"\nAPELLIDO: PEREZ";
				cout<<"\nEDAD: 18"<<endl;
				
				cout<<"\nDIGITE LA NOTA FINAL DE MATEMATICAS: ";
				cin>>n1;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE MATEMATICAS: ";
				cin>>p1;
				cout<<"\nDIGITE LA NOTA FINAL DE NATURALES: ";
				cin>>n2;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE NATURALES: ";
				cin>>p2;
				cout<<"\nDIGITE LA NOTA FINAL DE SOCIALES: ";
				cin>>n3;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE SOCIALES: ";
				cin>>p3;
				cout<<"\nDIGITE LA NOTA FINAL DE ESPANOL: ";
				cin>>n4;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE ESPANOL: ";
				cin>>p4;
				
								
				n1=(n1*0.7)+p1;
				n2=(n2*0.7)+p2;
				n3=(n3*0.7)+p3;
				n4=(n4*0.7)+p4;
				
				cout<<"\nLA NOTA TOTAL DE MATEMATICAS ES: "<<n1;
				
				if(n1>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE NATURALES ES: "<<n2;
				
				if(n2>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE SOCIALES ES: "<<n3;
				
				if(n3>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE ESPANOL ES: "<<n4;
				
				if(n4>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
		break;
		
		case 3: cout<<"\nNOMBRE: MARIA";
				cout<<"\nAPELLIDO: GONZALES";
				cout<<"\nEDAD: 18"<<endl;
				
				cout<<"\nDIGITE LA NOTA FINAL DE MATEMATICAS: ";
				cin>>n1;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE MATEMATICAS: ";
				cin>>p1;
				cout<<"\nDIGITE LA NOTA FINAL DE NATURALES: ";
				cin>>n2;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE NATURALES: ";
				cin>>p2;
				cout<<"\nDIGITE LA NOTA FINAL DE SOCIALES: ";
				cin>>n3;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE SOCIALES: ";
				cin>>p3;
				cout<<"\nDIGITE LA NOTA FINAL DE ESPANOL: ";
				cin>>n4;
				cout<<"\nDIGITE LA NOTA DE LA PRUEBA NACIONAL DE ESPANOL: ";
				cin>>p4;
								
				n1=(n1*0.7)+p1;
				n2=(n2*0.7)+p2;
				n3=(n3*0.7)+p3;
				n4=(n4*0.7)+p4;
				
				cout<<"\nLA NOTA TOTAL DE MATEMATICAS ES: "<<n1;
				
				if(n1>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE NATURALES ES: "<<n2;
				
				if(n2>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE SOCIALES ES: "<<n3;
				
				if(n3>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
				
				cout<<"\nLA NOTA TOTAL DE ESPANOL ES: "<<n4;
				
				if(n4>=70){
				cout<<"\nAPROBO"<<endl;
				} else {
				cout<<"\nREPROBO"<<endl;
				}
		break;  default: cout<<"\nSE EQUIVOCO DE OPCION EN EL MENU";
	}
	
	getch();
	return 0;
}
