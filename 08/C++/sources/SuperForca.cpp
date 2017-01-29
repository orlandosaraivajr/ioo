/*
Programa:   Vingadores
Arquivo:    SuperForca.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/SuperForca.h" 

using namespace std;

SuperForca::SuperForca() {
	cout << "Construtor SuperForca." <<  endl;
}

SuperForca::~SuperForca() {
	cout << "Destrutor SuperForca." <<  endl;
}

void SuperForca::setForca(float forca) {
	this->forca = forca;
}

float SuperForca::getForca() {
	return this->forca;
}

