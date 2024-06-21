#include <iostream>
#include <cmath>
using namespace std;
float Pi=M_PI;
float radio,a;

void peticion() {
	cout<<"Programa para calcular el area de un circulo"<<endl;
	cout<<"Introduzca el radio del circulo"<<endl;
	cin>>radio;
}

float area(float r) {
	a=Pi*pow(radio,2);
	return a;
}

void resultado() {
	cout<<"El area del circulo es: "<<area(radio);
}

int main () {
	peticion();
	resultado();
	return 0;
}