/*
Programa:   cadastro04
Arquivo:    cadastro04.cpp
*/
#include <iostream>
#include <limits>
#include "parametros.h"

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    char sexo;
} ;

int x; // Variável de controle

/*     Função para cadastro dos nomes        */
void cadastrar(Pessoa *cad) {
    int inputSexo;

    for ( x = 0; x < N ; x++) {
        cout << "Digite o nome: " ;
        cin >> cad[x].nome;

        /* Validação de input: Permitir números inteios e 
           não aceitar números negativos.     */
        do {
            cout << "Digite a idade:  " ;
            cin >> cad[x].idade;
            if(cin.fail()){
                cout << "Digite um número inteiro.\n" ;
                cin.clear();
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cad[x].idade = -1; // Forçar permanecer no laço do... while
            }
        } while(cad[x].idade < 0 );

        /* Validação do Sexo: 1 para Masculino, 2 para Feminino.             */
         cout<<"Selecione o sexo:  1) Masculino  2) Feminino\n";
          cin>> inputSexo;
          switch (inputSexo) {
            case 1:
                cad[x].sexo = 'M';
                break;
              case 2:
                cad[x].sexo = 'F';
            break;
            default:
                cad[x].sexo = 'M';
            break;
          }
    }
}

/*     Função para mostrar os cadastros    */
void mostrar(Pessoa *cad) {
    cout << "-------------------------------------" << endl;
    for ( x = 0; x < N ; x++) {
        if (cad[x].sexo == 'F' && cad[x].idade >= 30) {
            cout << cad[x].nome ;
            cout << "   não é elegante revelar a idade de uma mulher. "<< endl;
        } else {
            cout << cad[x].nome << "  -  ";
            cout << cad[x].idade << " anos  -  "<< cad[x].sexo << endl;
        }
    }
    cout << "-------------------------------------" << endl;
}

/*     Função hackeando.         */
void hackeando(Pessoa *cad) {
    cad[1].nome = "haCK3aDo";
    cad[1].idade = -2;
    cad[1].sexo = 'b';
}

/*     Função principal ( main )    */
int main() {
    Pessoa cadastro[N];

    cadastrar(cadastro);
    mostrar(cadastro);
    hackeando(cadastro);
    mostrar(cadastro);

    return 0;
}

