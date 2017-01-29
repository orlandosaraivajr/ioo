#ifndef PRESIDENTE_h
#define PRESIDENTE_H
#include "Politico.h"

using namespace std;

class Presidente : public Politico {
public:
    Presidente(string,string);
    ~Presidente();
};
#endif
