/*
Programa:   Vingadores
Arquivo:    IronMan.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/IronMan.h" 

using namespace std;

IronMan::IronMan() {
	this->setNome("Antony Stark");
	Pessoa::setOcupacao("cientista, empresário, gênio bilionário, playboy e filantrópico");
	this->setAltura(1.75);
	Pessoa::setPeso(80);
}

IronMan::~IronMan() {
	cout << "Destrutor do Homem de Ferro." << endl;
}

void IronMan::ativarArmadura() {
	this->armaduraAtivada = true;
	cout << "\n\n Javis diz: Pronto para o combate, senhor.\n\n" << endl;
}

void IronMan::desativarArmadura() {
	cout << "\n\n Javis diz: Desativando armadura de combate.\n\n" << endl;
	SuperForca::setForca(0);
	Voar::setAltitude(0);
	this->armaduraAtivada = false;
}

bool IronMan::getStatusArmadura() {
	return this->armaduraAtivada;
}


