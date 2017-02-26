/*
Programa:   Políticos
Arquivo:    Main.cpp
*/
#include <iostream>
#include <string>

#include "includes/Prefeito.h"
#include "includes/Vereador.h"

using namespace std;

int main() {

    Prefeito *pref = NULL;
    Vereador *vered = NULL;


    pref = new Prefeito("Odorico Paraguaçu","Partido do Povo","Sucupira","BA");
    vered = new Vereador("Doroteia","Partido do Povo","Sucupira","BA");

    pref->apresentacao();
    vered->apresentacao();
//    cout << endl << vered->nome << endl;
    return 0;
}

