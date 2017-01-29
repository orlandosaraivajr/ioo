// Governador.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Governador.h"
using namespace std;

Governador::Governador(string nome,string partido, string estado) {
    setNome(nome);
    setSalario(22000);
    setPartido(partido);
    setEstado(estado);
    setFuncao("administrar bem o ICMS para o bem do estado. ");
}
Governador::~Governador() {
    setNome("");
    setPartido("");
    setEstado("");
}
void Governador::apresentacao(){
    Politico::apresentacao();
    cout << "governador" << endl;
    cout << "Minha função é " << getFuncao();
    cout << getEstado() << endl;
    cout << "============================" << endl;
}
