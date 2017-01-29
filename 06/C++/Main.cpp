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
    delete vaso;

	return 0;
}
