#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(float A,float B,float C,float& r1,float& r2,float& rR,float& rI,bool& indicador) {
	float disc; //discriminante
		disc=pow(B,2)-4*A*C;
		if (disc>0) {
			indicador=1; //1: real
			r1=(-B+sqrt(disc))/(2*A);
			r2=(-B-sqrt(disc))/(2*A);
		} else if (disc==0) {
			indicador=1; 
			r1=r2=(-B+sqrt(disc))/(2*A);
		} else if (disc<0){
			indicador=0; //0: complejo
			if (B==0){
				rI=(sqrt(4*A*C))/(2*A);
			} else if (B!=0){
				rR=-B/(2*A);
				rI=sqrt(4*A*C-pow(B,2))/(2*A);
			}
		} 
}
int main() {
	float a,b,c,raiz1,raiz2,raizRe,raizIm;
	bool in;
	cout<<"Programa para calcular las raices de una ecuacion cuadratica\n\t\t\tax^2+bx+c=0"<<endl;
	cout<<"Ingrese el valor del coeficiente 'a':"<<endl;
	cin>>a;
	cout<<"Ingrese el valor del coeficiente 'b':"<<endl;
	cin>>b;
	cout<<"Ingrese el valor del coeficiente 'c':"<<endl;
	cin>>c;
	if (a!=0) {
	calcularRaices(a,b,c,raiz1,raiz2,raizRe,raizIm,in);
		if (in==1) { //validacion del indicador
			cout<<"El C.S pertenece a los Reales"<<endl;
			cout<<"C.S = "<<raiz1<<" , "<<raiz2;
		} else {
			cout<<"El C.S pertenece a los Imaginarios"<<endl;
			if (b==0){
				cout<<"C.S = "<<"-"<<raizIm<<"i";
				cout<<" , ";
				cout<<"+"<<raizIm<<"i";
			} else if (b!=0) {
				cout<<"C.S = "<<raizRe<<" - "<<raizIm<<"i";
				cout<<" , ";
				cout<<raizRe<<" + "<<raizIm<<"i";
			}
		}	
	} else {
		cout<<"Invalido no es una ecuacion cuadratica"<<endl;
	}
		return 0;
}