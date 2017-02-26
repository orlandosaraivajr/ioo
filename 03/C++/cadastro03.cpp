/*
Programa:   cadastro03
Arquivo:    cadastro03.cpp
*/
#include <iostream>
#include "parametros.h"

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    char sexo;
} ;

int x; // Variável de controle


/* Função para mostrar os cadastros  */
void mostrar(Pessoa *cad) {
    cout << "-------------------------------------------" << endl;
    for ( x = 0; x < N ; x++) {
        if (cad[x].sexo == 'F' and cad[x].idade >= 30) {
            cout << cad[x].nome << "  -  ";
            cout << "não é elegante revelar a idade de uma mulher. "<< endl;
        } else {
            cout << cad[x].nome << "  -  ";
            cout << cad[x].idade << " anos  -  "<< cad[x].sexo << endl;
        }
    }
    cout << "-------------------------------------------" << endl;
}
/* Função principal (main) */
int main() {

    Pessoa cadastro[N];

    for ( x = 0; x < N ; x++) {
        cout << "Digite o nome: ";
        cin >> cadastro[x].nome;
        cout << "Digite a idade: ";
        cin >> cadastro[x].idade;
        cout << "Digite o sexo (m para masculino, f para feminino): ";
        cin >> cadastro[x].sexo;
    }

    mostrar(cadastro);
    return 0;
}
