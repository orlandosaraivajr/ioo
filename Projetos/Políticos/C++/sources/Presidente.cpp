// Presidente.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/Presidente.h"
using namespace std;

Presidente::Presidente(string nome,string partido) {
    setNome(nome);
    setSalario(33000);
    setPartido(partido);
    setEstado("");
    setFuncao("administrar bem os impostos federais em prol do País. ");
}
Presidente::~Presidente() {
    setNome("");
    setPartido("");
}
