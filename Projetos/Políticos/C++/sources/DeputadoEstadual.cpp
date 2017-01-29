// DeputadoEstadual.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/DeputadoEstadual.h"
using namespace std;

DeputadoEstadual::DeputadoEstadual(string nome,string partido, string estado) {
    setNome(nome);
    setSalario(10000);
    setPartido(partido);
    setEstado(estado);
    setFuncao("propor as leis estaduais de interesse da população ");
}
DeputadoEstadual::~DeputadoEstadual() {
    setNome("");
    setPartido("");
    setEstado("");
}
void DeputadoEstadual::apresentacao(){
    Politico::apresentacao();
    cout << "sou deputado estadual" << endl;
    cout << "Minha função é " << getFuncao();
    cout << getEstado() << endl;
    cout << "============================" << endl;
}
