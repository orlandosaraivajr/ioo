/*
Programa:   Políticos
Arquivo:    Politico.h
*/
#ifndef POLITICO_H
#define POLITICO_H

using namespace std;

class Politico {
protected:
    string nome;
    string partido;
    string estado;
    string funcao;
public:
    Politico();
    ~Politico();

    void setNome(string);
    string getNome();
    void setPartido(string);
    string getPartido();
    void setEstado(string);
    string getEstado();
    void setFuncao(string);
    string getFuncao();
    void apresentacao();
};

#endif
