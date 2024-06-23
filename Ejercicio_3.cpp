#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float cateto1,cateto2,hipotenusa;
	cout<<"Programa para calcular la hipotenusa de un triangulo rectangulo"<<endl;
	cout<<"Ingrese la medida de los catetos de un triangulo:"<<endl;
	cin>>cateto1>>cateto2;
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout<<"Su hipotenusa es:"<<endl;
	cout<<hipotenusa;
	return 0;
}