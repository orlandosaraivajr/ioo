/*
Programa:   CaixaAcoplada
Arquivo:    alavancaAcionamento.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/alavancaAcionamento.h" 

using namespace std;

alavancaAcionamento::alavancaAcionamento() {
    cout << "Construtor da alavanca de acionamento. " << endl;    
}

alavancaAcionamento::~alavancaAcionamento() {
    cout << "Destrutor da alavanca de acionamento. " << endl;    
}

void alavancaAcionamento::acionar() {
    cout << "Alavanca de acionamento ativada. " << endl;
    this->contador_2++;
}

void alavancaAcionamento::acionar(int opcao) {
    cout << "Privada Inteligente. " << endl;
    if (opcao == 1) {
        cout << "Opção : " << opcao << " selecionada"<< endl;
        this->contador_1++;
    } if (opcao == 2) {
        cout << "Opção : " << opcao << " selecionada"<< endl;
    }else {
        cout << "Opção desconhecida. Pressione 1 ou 2." << endl;
    }
}

void alavancaAcionamento::getRelatorio() {
    cout << "\n\nRelatório de uso da Privada Inteligente. " << endl;
    cout << "Opção 1: " << this->contador_1 << " descargas aplicadas" << endl;
    cout << "Opção 2: " << this->contador_2 << " descargas aplicadas" << endl;
    cout << "\n\n ";
}
