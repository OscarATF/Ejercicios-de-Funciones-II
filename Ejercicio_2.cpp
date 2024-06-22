#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int genA;
	int num;
	int max;
	cout<<"Programa que genera y muestra una serie de numeros aleatorios del 0 al maximo valor permitido por el usuario"<<endl;
	cout<<"Ingrese la cantidad de numeros aleatorios que desea generar:"<<endl;
	cin>>num;
	cout<<"Ingrese el valor maximo permitido"<<endl;
	cin>>max;
	genA=rand()%(max+1);
	for (int i=1;i<=num;i++) {
		genA=rand()%(max+1);
		cout<<genA<<" ";
	}
	return 0;
}