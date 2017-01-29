/*
Programa:   Políticos
Arquivo:    Vereador.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Vereador.h"
using namespace std;

Vereador::Vereador(string nome,string partido,string municipio, string estado) {

    this->nome = nome; //    setNome(nome);
    setPartido(partido);
    setMunicipio(municipio);
    setEstado(estado);
    setFuncao("propor leis municipais em benefício da população.");
}

Vereador::~Vereador() {
    setNome("");
    setPartido("");
    setEstado("");
}

void Vereador::setMunicipio(string municipio){
    this->municipio = municipio;
}

string Vereador::getMunicipio(){
    return this->municipio;
}

void Vereador::apresentacao(){
    Politico::apresentacao();
    cout << "sou vereador em " << getMunicipio() << " / " << getEstado() << endl;
    cout << "Minha função é " << this->getFuncao() << endl;
    cout << "============================" << endl;
}
