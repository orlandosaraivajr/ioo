/*
Programa:   Vingadores
Arquivo:    Hulk.h
*/
#ifndef HULK_H
#define HULK_H

#include "Pessoa.h" 
#include "SuperForca.h" 

using namespace std;

class Hulk : private Pessoa, private SuperForca {
private:

public:
	Hulk();
	~Hulk();

	void ficarNervoso();
	void vaiPescar();

	void getDados();
};

#endif
