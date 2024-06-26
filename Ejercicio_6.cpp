#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int genA,op,opCONFIG,opM,contJUG=0,contCPU=0,contPAR=0;
//TEXTO DE GANADOR
void ganador() {
	if (op==1 && genA==3 || op==2 & genA==1 || op==3 && genA==2) {
		cout<<"\nGANA EL JUGADOR!!!\n"<<endl;
		contJUG++;
	} else if (op==1 && genA==2 || op==2 & genA==3 || op==3 && genA==1) {
		cout<<"\nGANA LA COMPUTADORA!!!\n"<<endl;
		contCPU++;
	} else if (op==genA) {
		cout<<"\nEMPATE!!!\n"<<endl;
	}	
}
//SELECCION DE LA COMPUTADORA
void opCPU() {
	if (op<=3 && op>=0) {
		switch (genA){
			case 1:
				cout<<"CPU escoge Piedra"<<endl;
				break;
			case 2:
				cout<<"CPU escoge Papel"<<endl;
				break;
			case 3:
				cout<<"CPU escoge Tijeras"<<endl;
				break;
		}
	}
}
//SELECCION DEL JUGADOR
void opJUG() {
		switch (op) {
		case 1:
			cout<<"Escogiste piedra"<<endl;
			break;
		case 2:
			cout<<"Escogiste Papel"<<endl;
			break;
		case 3:
			cout<<"Escogiste Tijeras"<<endl;
			break;
		default:
			system("cls");
			cout<<" Ingrese una opcion valida\n"<<endl;
			contPAR--;
	}
}
//JUEGO
void juego() {
		do {
			genA=rand()%3+1;
			system("cls");
			system("color 0b");
			cout<<"Juego piedra papel y tijeras\n\nElija una opcion\n1. Piedra\n2. Papel\n3. Tijeras\n"<<endl;
			cout<<"PARTIDAS JUGADAS: "<<contPAR<<endl;
			contPAR++;
			cout<<"PARTIDAS GANADAS POR EL JUGADOR: "<<contJUG<<endl;
			cout<<"PARTIDAS GANADAS POR LA COMPUTADORA: "<<contCPU<<endl;
			cin>>op;
			system("cls");
			system("color 0A");
			opJUG();
			opCPU();
			ganador();
			system("pause");
				if (contJUG==2 && contCPU==2) {
					cout<<"\n\tDESEMPATE!!!\n"<<endl;
					sleep(1);
					}
			} while (contJUG<3 && contCPU<3);
					system("cls");
					system("color 0c");
					cout<<"PARTIDAS JUGADAS: "<<contPAR<<endl;
					cout<<"PARTIDAS GANADAS POR EL JUGADOR: "<<contJUG<<endl;
					cout<<"PARTIDAS GANADAS POR LA COMPUTADORA: "<<contCPU<<endl;
					cout<<"\nJUEGO TERMINADO\n"<<endl;
					return;
}
int main() {
	srand(time(0));
	ganador();
	opCPU();
	juego();
	return 0;
}