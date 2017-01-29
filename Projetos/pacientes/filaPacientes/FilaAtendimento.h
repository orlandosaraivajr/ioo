#include <list>
#include <iostream>

using namespace std;

class FilaAtendimento {
private:
	Pessoa *aux;

    list<Pessoa *> lista;
    list<Pessoa *>::iterator i;
public:
	FilaAtendimento();
	~FilaAtendimento();
	void atender();
	void adicionar(string nome,int idade);
	void mostrarFila();
};
