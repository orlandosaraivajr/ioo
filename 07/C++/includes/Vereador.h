/*
Programa:   Políticos
Arquivo:    Vereador.h
*/
#ifndef VEREADOR_H
#define VEREADOR_H
#include "Politico.h"

using namespace std;

class Vereador : public Politico {
public:
    string municipio;
public:
    Vereador(string,string,string,string);
    ~Vereador();

    void setMunicipio(string);
    string getMunicipio();
    void apresentacao();
};

#endif
