#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

class Pessoa {
	string nome;
	int idade;
	std::chrono::time_point<std::chrono::system_clock> tempo_inicial, tempo_final;
public:
	Pessoa(string nome, int idade);
	~Pessoa();
	string getnome();
	void setnome(string n);
	void setidade(int i);
	int getidade();
	void mostrar();
};
