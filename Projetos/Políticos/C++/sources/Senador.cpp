// Senador.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Senador.h"
using namespace std;

Senador::Senador(string nome,string partido, string estado) {
    setNome(nome);
    setSalario(30000);
    setPartido(partido);
    setEstado(estado);
    setFuncao("propor no Senado leis federais em benefício da população.");
}
Senador::~Senador() {
    setNome("");
    setPartido("");
    setEstado("");
}
void Senador::apresentacao(){
    Politico::apresentacao();
    cout << "sou senador " << endl;
    cout << "Minha função é " << this->getFuncao() << endl;
    cout << "Fui eleito por " << this->getEstado() << endl;
    cout << "============================" << endl;
}
