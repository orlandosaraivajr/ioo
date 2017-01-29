/*
Programa:   Vingadores
Arquivo:    Pessoa.h
*/
#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa {
private:
	string nome = "NÃO REVELADO";
	string ocupacao = "NÃO REVELADO";
	string sexo = "masculino";
	float peso;
	float altura;


public:
	Pessoa();
	~Pessoa();

	void setNome(string);
	string getNome();

	void setOcupacao(string);
	string getOcupacao();

	void setPeso(float);
	float getPeso();

	void setAltura(float);
	float getAltura();

	void getDados();
};

#endif
