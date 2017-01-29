#include <iostream>
#include <thread>        // std::this_thread::sleep_for
#include <chrono>        // std::chrono::seconds
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
    srand((unsigned)time(0));
    if (lista.empty() && listaPrioritaria.empty()){
        cout << "Lista vazia. Nenhuma pessoa para atender " << endl;
    } else {
        if (listaPrioritaria.empty()){
            int maior = 2500;
            int menor = 1000;
            int aleatorio = rand()%(maior-menor+1) + menor;
            std::this_thread::sleep_for(std::chrono::milliseconds(aleatorio));
            // O atendimento a lista só ocorre caso a lista
            // prioritária esteja vazia.
            i = lista.begin();
            cout << "\nAtendendo " << (*i)->getnome();
            cout << " - " << (*i)->getidade() << " anos ";
            delete *i;
            lista.pop_front();
        } else {
            int maior = 3500;
            int menor = 1500;
            int aleatorio = rand()%(maior-menor+1) + menor;
            std::this_thread::sleep_for(std::chrono::milliseconds(aleatorio));
            i = listaPrioritaria.begin();
            cout << "\nAtendendo " << (*i)->getnome();
            cout << " - " << (*i)->getidade() << " anos ";
            cout << " - atendimento preferencial. ";
            delete *i;
            listaPrioritaria.pop_front();
        }
    }
}

void FilaAtendimento::adicionar(string nome,int idade){
    aux = new Pessoa(nome, idade);
    if(idade > 60){
        listaPrioritaria.push_back(aux);
        cout << "O paciente " << nome ;
        cout << " entrou na fila prioritária." << endl;
    }else {
        lista.push_back(aux);
        cout << "O paciente " << nome ;
        cout << " entrou na fila." << endl;
    }

}

void FilaAtendimento::mostrarFila(){
    if (lista.empty() && listaPrioritaria.empty()){
        cout << "Todos os pacientes foram atendidos.\n ";
        return;
    } else {
        if (listaPrioritaria.empty()){
            cout << "Todos os pacientes preferenciais foram atendidos.\n ";
        } else {
            cout << "\n\n\t Os pacientes com atendimento ";
            cout << " preferencial não atendidos: \n";
            i = listaPrioritaria.begin();
            for (int x=0; x<listaPrioritaria.size(); x++){
                (*i)->mostrar();
                i++;
            }
        }
        if (lista.empty()){
            cout << "Todos os pacientes foram atendidos.\n ";
        } else {
            i = lista.begin();
            cout << "\n\n\t Os pacientes não atendidos ainda: \n";
            i = lista.begin();
            for (int x=0; x<lista.size(); x++){
                (*i)->mostrar();
                i++;
            }
        }
    }

}
