#ifndef POLITICO_H
#define POLITICO_H

using namespace std;

class Politico {
private:
    string nome;
    string partido;
    string estado;
    string funcao;
    float salario;
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
    void setSalario(float);
    float getSalario();
    void apresentacao();
};

#endif
