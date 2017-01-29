#include <iostream>

using namespace std;

class Pessoa {
	string nome;
	int idade;
public:
	Pessoa(string nome, int idade);
	string getnome();
	void setnome(string n);
	void setidade(int i);
	int getidade();
	void mostrar();
};
