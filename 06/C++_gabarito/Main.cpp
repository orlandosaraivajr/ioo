/*
Programa:   CaixaAcoplada
Arquivo:    Main.cpp
*/
#include <iostream>
#include <string>
#include "includes/CaixaAcoplada.h" 

using namespace std;

int main() {
    CaixaAcoplada *vaso = new CaixaAcoplada();
    vaso->acionar();
    vaso->acionar(1);
    vaso->acionar(2);
    vaso->acionar(3);
    vaso->getRelatorio();
    delete vaso;
    return 0;
}
