#include <iostream>
#include "Pessoa.h"
#include "FilaAtendimento.h"

using namespace std;

FilaAtendimento::FilaAtendimento(){
    cout << "Construtor da Fila" << endl;
}

FilaAtendimento::~FilaAtendimento(){
    cout << "Destrutor da Fila" << endl;
    lista.clear();
    listaPrioritaria.clear();
    mostrarFila();
}

void FilaAtendimento::atender(){
    if (lista.empty() && listaPrioritaria.empty()){
        cout << "Lista vazia. Nenhuma pessoa para atender " << endl;
    } else {
        if (listaPrioritaria.empty()){
            // O atendimento a lista só ocorre caso a lista
            // prioritária esteja vazia.
            i = lista.begin();
            cout << "\nAtendendo " << (*i)->getnome();
            cout << " - " << (*i)->getidade() << " anos ";
            lista.pop_front();
        } else {
            i = listaPrioritaria.begin();
            cout << "\nAtendendo " << (*i)->getnome();
            cout << " - " << (*i)->getidade() << " anos ";
            cout << " - atendimento preferencial. ";
            listaPrioritaria.pop_front();
        }
    }
}

void FilaAtendimento::adicionar(string nome,int idade){
    aux = new Pessoa(nome, idade);
    if(idade > 60){
        listaPrioritaria.push_back(aux);
    }else {
        lista.push_back(aux);
    }

}

void FilaAtendimento::mostrarFila(){
    if (lista.empty() && listaPrioritaria.empty()){
        cout << "Lista vazia !\n ";
        return;
    } else {
        cout << "\n\n\t Os pacientes com atendimento ";
        cout << " preferencial não atendidos: \n";
        i = listaPrioritaria.begin();
        for (int x=0; x<listaPrioritaria.size(); x++){
            (*i)->mostrar();
            i++;
        }
        i = lista.begin();
        cout << "\n\n\t Os pacientes não atendidos ainda: \n";
        i = lista.begin();
        for (int x=0; x<lista.size(); x++){
            (*i)->mostrar();
            i++;
        }
    }

}
