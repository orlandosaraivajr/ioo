/*
Programa:   Vingadores
Arquivo:    IronMan.h
*/
#ifndef IRONMAN_H
#define IRONMAN_H

#include "Pessoa.h" 
#include "SuperForca.h" 
#include "Voar.h" 

using namespace std;

class IronMan : private Pessoa, public SuperForca, public Voar {
private:
	bool armaduraAtivada = false;
public:
	IronMan();
	~IronMan();

	void ativarArmadura();
	void desativarArmadura();
	bool getStatusArmadura();
};

#endif
