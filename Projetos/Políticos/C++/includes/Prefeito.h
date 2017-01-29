#ifndef PREFEITO_H
#define PREFEITO_H
#include "Politico.h"

using namespace std;

class Prefeito : public Politico {
private:
    string municipio;
public:
    Prefeito(string,string,string,string);
    ~Prefeito();

    void setMunicipio(string);
    string getMunicipio();
    void apresentacao();
};

#endif
