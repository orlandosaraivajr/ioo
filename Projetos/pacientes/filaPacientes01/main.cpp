#include <iostream>
#include "Pessoa.h"
#include "FilaAtendimento.h"

using namespace std;

int main()
{
    FilaAtendimento fila;

    fila.mostrarFila();

    fila.adicionar("Orlando", 34);
    fila.adicionar("Maria", 64);
    fila.adicionar("Ana", 33);
    fila.adicionar("Lucas", 4);
    fila.adicionar("Paulo", 65);
    fila.adicionar("Ilma", 70);

    fila.atender();
    fila.atender();

    fila.mostrarFila();

    return 0;
}
