/*
Programa:   CaixaAcoplada
Arquivo:    CaixaAcoplada.h
*/
#ifndef CAIXAACOPLADA_H
#define CAIXAACOPLADA_H

#include "alavancaAcionamento.h" 
#include "comportaVedacao.h"
#include "valvulaAlimentacao.h"  

using namespace std;

class CaixaAcoplada {
private:
    float nivelAgua;
    const float nivelMaximo = 6.0; // litros

    alavancaAcionamento* alavanca;
    comportaVedacao* comporta;
    valvulaAlimentacao* entradaAgua;

public:
    CaixaAcoplada();
    ~CaixaAcoplada();

    void encherCaixa();
    void acionar();
};

#endif
