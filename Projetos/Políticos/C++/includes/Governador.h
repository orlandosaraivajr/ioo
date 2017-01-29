#ifndef GOVERNADOR_H
#define GOVERNADOR_H
#include "Politico.h"

using namespace std;

class Governador : public Politico {
public:
    Governador(string,string,string);
    ~Governador();

    void apresentacao();
};
#endif
