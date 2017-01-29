// DeputadoFederal.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/DeputadoFederal.h"
using namespace std;

DeputadoFederal::DeputadoFederal(string nome,string partido, string estado) {
    setNome(nome);
    setSalario(20000);
    setPartido(partido);
    setEstado(estado);
    setFuncao("propor na Câmara leis federais em benefício da população.");
}
DeputadoFederal::~DeputadoFederal() {
    setNome("");
    setPartido("");
    setEstado("");
}

void DeputadoFederal::apresentacao(){
    Politico::apresentacao();
    cout << "sou deputado federal" << endl;
    cout << "Minha função é " << this->getFuncao() << endl;
    cout << "Fui eleito por " << this->getEstado() << endl;
    cout << "============================" << endl;
}
