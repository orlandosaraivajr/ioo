/*
Programa:   Matrix
Arquivo:    main.cpp
*/
#include <iostream>
#include "matrix.cpp"
#define  N  5

using namespace std;

int main()
{
    Agente *Pessoas[N];
    Professor *Prof;
    Empresario *Empr;
    Advogado *Adv;
    string nome,parametro2;

    int contador = 0;
    int i = 0;
    char profissao;
    for(i=0; i<N; i++){
        cout  << "Escolha a profissão: "<< endl;
        cout  << "1) Empresário    ";
        cout  << "2) Professor    ";
        cout  << "3) Advogado "<< endl;
        cin >> profissao;
        if(profissao == '1'){
            cout  << "Digite o nome do empresário(a): ";
            cin >> nome;
            cout  << "Digite o nome da empresa: ";
            cin >> parametro2;
            Empr = new Empresario(nome,parametro2);
            Pessoas[contador++] = Empr;
        } else if(profissao == '2'){
            cout  << "Digite o nome do professor(a): ";
            cin >> nome;
            cout  << "Digite o nome da escola: ";
            cin >> parametro2;
            Prof = new Professor(nome,parametro2);
            Pessoas[contador++] = Prof;
        } else {
            cout  << "Digite o nome do advogado(a): ";
            cin >> nome;
            cout  << "Digite o número OAB: ";
            cin >> parametro2;
            Adv = new Advogado(nome,parametro2);
            Pessoas[contador++] = Adv;
        }
    }
    cout << "==================================" << endl;
    for(i=0; i<N; i++) {
        Pessoas[i]->apresentacao();
    }

    Pessoas[2]->mode_on();
    Pessoas[4]->mode_on();

    cout << "==================================" << endl;
    for(i=0; i<N; i++) {
        Pessoas[i]->apresentacao();
    }
}
