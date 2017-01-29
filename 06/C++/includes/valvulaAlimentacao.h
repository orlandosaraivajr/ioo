/*
Programa:   CaixaAcoplada
Arquivo:    valvulaAlimentacao.h
*/
#ifndef VALVULAALIMENTACAO_H
#define VALVULAALIMENTACAO_H

using namespace std;

class valvulaAlimentacao {
private:
    float capacidadeVazao = 0.4; // litros por segundo
public:
    valvulaAlimentacao();
    ~valvulaAlimentacao();

    float getCapacidadeVazao();
};

#endif
