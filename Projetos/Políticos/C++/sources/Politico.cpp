// Politico.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Politico.h"

using namespace std;

Politico::Politico() {
}
Politico::~Politico() {
}
void Politico::setNome(string nome){
    this->nome = nome;
}
string Politico::getNome(){
    return this->nome;
}
void Politico::setPartido(string partido){
    this->partido = partido;
}
string Politico::getPartido(){
    return this->partido;
}
void Politico::setEstado(string estado){
    this->estado = estado;
}
string Politico::getEstado(){
    return this->estado;
}
void Politico::setFuncao(string funcao){
    this->funcao = funcao;
}
string Politico::getFuncao(){
    return this->funcao;
}
void Politico::setSalario(float salario){
    this->salario = salario;
}
float Politico::getSalario(){
    return this->salario;
}

void Politico::apresentacao(){
    cout << "Olá, sou "<< this->getNome() << endl;
    cout << "Meu Salário: "<< this->getSalario() << endl;
    cout << "Meu partido é "<< this->getPartido() << endl;
}
