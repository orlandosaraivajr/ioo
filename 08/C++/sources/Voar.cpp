/*
Programa:   Vingadores
Arquivo:    Voar.cpp
*/
#include <iostream>
#include "../includes/Voar.h" 

using namespace std;

Voar::Voar() {
	cout << "Construtor Voar." <<  endl;
}

Voar::~Voar() {
	cout << "Destrutor Voar." <<  endl;
}

void Voar::setAltitude(float altitude) {
	this->altitude = altitude;
}

float Voar::getAltitude() {
	return this->altitude;
}
