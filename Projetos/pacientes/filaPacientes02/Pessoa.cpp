#include "Pessoa.h"
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;


Pessoa::Pessoa(string n, int i)
{
    tempo_inicial = std::chrono::system_clock::now();
    nome = n;
    idade = i;
}

Pessoa::~Pessoa()
{
    tempo_final = std::chrono::system_clock::now();
    std::chrono::duration<double> tempo_na_fila = tempo_final-tempo_inicial;
    cout << "\nTempo na fila: " << tempo_na_fila.count() << " segundos\n";
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
