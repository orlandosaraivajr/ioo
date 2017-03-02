/*
Programa:   Vinculacao
Arquivo:    Vinculacao.cpp
*/
#include <iostream>

using namespace std;

static float numero2 = 6.2;

void funcao1() {
	float *ponteiro2 = new float;
	*ponteiro2 = numero2;	
	cout << "Endereço do ponteiro na funcao1: " << &ponteiro2 << endl;
	cout << "Valor do ponteiro na funcao1: " << *ponteiro2 << endl;
	cout << "Número 2: " << numero2 << endl;
	numero2 = 4.2;
	delete ponteiro2;
	cout << "Valor do ponteiro na funcao1: " << *ponteiro2 << endl;
}

int main() {
	float numero1 = 10.4;
	float *ponteiro;
/*
	Em C, seria assim:
	ponteiro = (float*)malloc(sizeof(float));
*/
	ponteiro = new float;
	*ponteiro = numero1;

	cout << "Número 1: " << numero1 << endl;
	cout << "Endereço do ponteiro: " << &ponteiro << endl;
	cout << "Valor do ponteiro: " << *ponteiro << endl;

	numero2 = 5.8;
	*ponteiro = numero2;

	cout << "Endereço do ponteiro: " << &ponteiro << endl;
	cout << "Valor do ponteiro: " << *ponteiro << endl;

	funcao1();
	cout << "Número 2: " << numero2 << endl;
	delete ponteiro;

	return 0;
}

