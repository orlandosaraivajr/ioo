#ifndef SENADOR_H
#define SENADOR_H
#include "Politico.h"

using namespace std;

class Senador : public Politico {
public:
    Senador(string,string,string);
    ~Senador();

    void apresentacao();
};

#endif
