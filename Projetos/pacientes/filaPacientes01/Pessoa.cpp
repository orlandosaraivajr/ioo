#include "Pessoa.h"
#include <iostream>

using namespace std;


Pessoa::Pessoa(string n, int i)
{
   nome = n;
   idade = i;
}

void Pessoa::mostrar() {
	cout << "Nome: "<< nome << "\t idade: "<< idade << endl;
}

void Pessoa::setnome(string n) {
	nome=n;
}

void Pessoa::setidade(int i){
	idade=i;
}

string Pessoa::getnome()
{
   return nome;
}

int Pessoa::getidade()
{
   return idade;
}
