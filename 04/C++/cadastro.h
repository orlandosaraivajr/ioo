/*
Programa:   cadastro
Arquivo:    cadastro.h
*/
#ifndef CADASTRO_H
#define CADASTRO_H

using namespace std;

class Pessoa { 
   private:
	string nome;
	int idade;
	char sexo;
   public:
	Pessoa();
	void cadastrar();
	void mostrar();
} ;
#endif
