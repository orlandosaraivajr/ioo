/*
Programa:   cadastro02
Arquivo:    cadastro02.cpp
*/
#include <iostream>
#include "parametros.h"

using namespace std;
struct Pessoa {
    string nome;
    int idade;
    char sexo;
} ;

int main() {

    Pessoa cadastro[N];
    int x; // Variável de controle

    for ( x = 0; x < N ; x++) {
        cout << "Digite o nome: ";
        cin >> cadastro[x].nome;
        cout << "Digite a idade: ";
        cin >> cadastro[x].idade;
        cout << "Digite o sexo (m para masculino, f para feminino): ";
        cin >> cadastro[x].sexo;
    }

    for ( x = 0; x < N ; x++) {
        cout << cadastro[x].nome << "  -  "<< cadastro[x].idade ;
        cout << "  -  "<< cadastro[x].sexo << endl;
    }
    return 0;
}

