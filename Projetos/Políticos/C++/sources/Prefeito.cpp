// Prefeito.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Prefeito.h"
using namespace std;

Prefeito::Prefeito(string nome,string partido,string municipio, string estado) {
    setNome(nome);
    setSalario(6000);
    setPartido(partido);
    setMunicipio(municipio);
    setEstado(estado);
    setFuncao("administrar o IPTU visando o melhor para a cidade.");
}
Prefeito::~Prefeito() {
    setNome("");
    setPartido("");
    setEstado("");
}
void Prefeito::setMunicipio(string municipio){
    this->municipio = municipio;
}
string Prefeito::getMunicipio(){
    return this->municipio;
}
void Prefeito::apresentacao(){
    Politico::apresentacao();
    cout << "sou prefeito em " << getMunicipio() << " / " << getEstado() << endl;
    cout << "Minha função é " << this->getFuncao() << endl;
    cout << "============================" << endl;
}
