/*
Programa:   CaixaAcoplada
Arquivo:    alavancaAcionamento.h
*/
#ifndef ALAVANCAACIONAMENTO_H
#define ALAVANCAACIONAMENTO_H

using namespace std;

class alavancaAcionamento {
private:
    int contador_1 = 0;
    int contador_2 = 0;
public:
    alavancaAcionamento();
    ~alavancaAcionamento();

    void acionar();
    void acionar(int);

    void getRelatorio();
};

#endif
