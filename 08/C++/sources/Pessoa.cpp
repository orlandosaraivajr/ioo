/*
Programa:   Vingadores
Arquivo:    Pessoa.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Pessoa.h" 

using namespace std;

Pessoa::Pessoa() {
	cout << "Construtor Pessoa." <<  endl;
}

Pessoa::~Pessoa() {
	cout << "Destrutor Pessoa." <<  endl;
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

string Pessoa::getNome() {
	return this->nome;
}

void Pessoa::setOcupacao(string ocupacao) {
	this->ocupacao = ocupacao;
}

string Pessoa::getOcupacao() {
	return this->ocupacao;
}

void Pessoa::setPeso(float peso) {
	this->peso = peso;
}

float Pessoa::getPeso() {
	return this->peso;
}

void Pessoa::setAltura(float altura) {
	this->altura = altura;
}

float Pessoa::getAltura() {
	return this->altura;
}

void Pessoa::getDados() {
	cout << "Nome: 		" << this->nome << endl;
	cout << "Sexo: 		" << this->sexo << endl;
	cout << "Ocupação: 	" << this->ocupacao << endl;
	cout << "Peso: 		" << this->peso << endl;
	cout << "Altura: 	" << this->altura << endl;
}
