/*
Programa:   CaixaAcoplada
Arquivo:    valvulaAlimentacao.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/valvulaAlimentacao.h" 

using namespace std;

valvulaAlimentacao::valvulaAlimentacao() {
    cout << "Construtor da válvula de alimentação. " << endl;    
}

valvulaAlimentacao::~valvulaAlimentacao() {
    cout << "Destrutor da válvula de alimentação. " << endl;    
}

float valvulaAlimentacao::getCapacidadeVazao() {
    return this->capacidadeVazao;
}
