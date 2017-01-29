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
    mostrarFila();
}

void FilaAtendimento::atender(){
    if (lista.empty()){
        cout << "Lista vazia. Nenhuma pessoa para atender " << endl;
    } else {
        i = lista.begin();
        cout << "\nAtendendo " << (*i)->getnome();
        cout << " - " << (*i)->getidade() << " anos ";
        lista.pop_front();
    }
}

void FilaAtendimento::adicionar(string nome,int idade){
    aux = new Pessoa(nome, idade);
    lista.push_back(aux);
}

void FilaAtendimento::mostrarFila(){
    if (lista.empty()){
        cout << "Lista vazia !\n ";
        return;
    } else {
        cout << "\n\n\t Os pacientes não atendidos ainda: \n";
        i = lista.begin();
        for (int x=0; x<lista.size(); x++){
            (*i)->mostrar();
            i++;
        }
    }

}
