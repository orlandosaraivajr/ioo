#ifndef DEPUTADOESTADUAL_H
#define DEPUTADOESTADUAL_h
#include "Politico.h"

using namespace std;

class DeputadoEstadual : public Politico {
public:
    DeputadoEstadual(string,string,string);
    ~DeputadoEstadual();

    void apresentacao();
};
#endif
