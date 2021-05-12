#include <iostream>
#include "Veiculo.h"
using namespace std;

//            void Veiculo::mover(){
//                cout<< "o veículo "+this->getNome()+ " se moveu."<<endl;
//            }

void Terrestre::setCapMax(int cap_max) {
	this->cap_max = cap_max;
}

int Terrestre::getCapMax() {
	return this->cap_max;
}

void Terrestre::mover() {
	cout << "o veículo terrestre " << this->nome << " se moveu." << endl;
}

void Aquatico::setCargaMax(float carga_max) {
	this->carga_max = carga_max;
}

float Aquatico::getCargaMax() {
	return this->carga_max;
}

void Aquatico::mover() {
	cout << "o veículo aquatico " << this->nome << " se moveu." << endl;
}

void Aereo::setVelMax(float vel_max) {
	this->vel_max = vel_max;
}

float Aereo::getVelMax() {
	return this->vel_max;
}

void Aereo::mover() {
	cout << "o veículo aéreo " + this->nome + " se moveu." << endl;
}
