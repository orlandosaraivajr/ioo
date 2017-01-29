/*
Programa:   Vingadores
Arquivo:    Hulk.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Hulk.h" 

using namespace std;

Hulk::Hulk() {
	this->setNome("Bruce Banner");
	Pessoa::setOcupacao("cientista formado como físico nuclear especialista em raio gama");
	this->setAltura(1.70);
	Pessoa::setPeso(75);
	SuperForca::setForca(30);
}

Hulk::~Hulk() {
	cout << "Destrutor do Hulk." << endl;
}

void Hulk::ficarNervoso() {
	cout << "\n\n Hulk esmaga !!!\n\n" << endl;
	this->setNome("HUUUULLLKKK !!!!");
	this->setOcupacao("esmagador profissional");
	this->setAltura(3.20);
	this->setPeso(500);
//	SuperForca::setForca(10000);
	this->setForca(10000);
}

void Hulk::vaiPescar() {
	cout << "\n\n Hulk Calmo....\n\n" << endl;
	this->setNome("Bruce Banner");
	Pessoa::setOcupacao("cientista formado como físico nuclear especialista em raio gama");
	this->setAltura(1.70);
	this->setPeso(75);
	this->setForca(30);
}

void Hulk::getDados() {
	Pessoa::getDados();
//	cout << "Forca:" << this->forca << endl;
	cout << "Forca:" << this->getForca() << endl;
}



