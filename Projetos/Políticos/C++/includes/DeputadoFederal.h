#ifndef DEPUTADOFEDERAL_H
#define DEPUTADOFEDERAL_H
#include "Politico.h"

using namespace std;

class DeputadoFederal : public Politico {
public:
    DeputadoFederal(string,string,string);
    ~DeputadoFederal();

    void apresentacao();
};
#endif
