/*
Programa:   cadastro01
Arquivo:    cadastro01.cpp
*/
#include <iostream>
#include "parametros.h"

using namespace std;

int main() {
    int idade[N];
    string nome[N];
    char sexo[N];
    int x; // Variável de controle

    for ( x = 0; x < N ; x++) {
        cout << "Digite o nome: ";
        cin >> nome[x];
        cout << "Digite a idade: ";
        cin >> idade[x];
        cout << "Digite o sexo (m para masculino, f para feminino): ";
        cin >> sexo[x];
    }

    for ( x = 0; x < N ; x++) {
        cout << nome[x] << "  -  "<< idade[x] << "  -  "<< sexo[x]<< endl;
    }
    return 0;
}

