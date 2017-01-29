/*
Programa:   CaixaAcoplada
Arquivo:    CaixaAcoplada.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/CaixaAcoplada.h" 

using namespace std;

CaixaAcoplada::CaixaAcoplada() {

    alavanca = new alavancaAcionamento();
    comporta = new comportaVedacao();
    entradaAgua = new valvulaAlimentacao();

    this->nivelAgua = 0;
    this->encherCaixa();
}

CaixaAcoplada::~CaixaAcoplada() {
    this->nivelAgua = 0;

    delete alavanca;
    delete comporta;
    delete entradaAgua;
}

void CaixaAcoplada::encherCaixa() {
    while (this->nivelAgua <= this->nivelMaximo) {
        cout << "Nível da água em: " << this->nivelAgua << endl;
        this->nivelAgua = nivelAgua + entradaAgua->getCapacidadeVazao();
    } 
}

void CaixaAcoplada::acionar() {
    alavanca->acionar();
    this->nivelAgua = comporta->abrir();
    cout << "Nível da água em: " << this->nivelAgua << endl;
    cout << "****************************************" << endl;
    comporta->fechar();
    this->encherCaixa();
}
// Método adicionado para atendimento do requisito 2
void CaixaAcoplada::acionar(int opcao) {
    alavanca->acionar(opcao);
    if (opcao == 1) {
        this->nivelAgua = comporta->abrir(this->nivelMaximo/2);
        cout << "Nível da água em: " << this->nivelAgua << endl;
        cout << "****************************************" << endl;
        comporta->fechar();
        this->encherCaixa();
    }
    if (opcao == 2) {
        this->acionar();
    }
}

// Método adicionado para atendimento do requisito 3
void CaixaAcoplada::getRelatorio() {
    alavanca->getRelatorio();
}
