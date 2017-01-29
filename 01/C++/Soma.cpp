/*
Programa:   Soma
Arquivo:    Soma.cpp
*/
#include <iostream>

using namespace std;

float soma(float numero01,float numero02) 
{
	cout << "Estamos fazendo soma de floats aqui. ";
	float resultado;
	resultado = numero01 + numero02;
	return resultado;
}

int soma(int numero01,int numero02) 
{
	cout << "Estamos fazendo soma de inteiros aqui. ";
	int resultado;
	resultado = numero01 + numero02;
	return resultado;
}

int main() {
	float numero_float_1 = 5.3;
	float numero_float_2 = 4.9;
	cout << "Soma de floats = " << soma(numero_float_1,numero_float_2);
	int numero_inteiro_1 = 4;
	int numero_inteiro_2 = 6;
	cout << "Soma de inteiros = " << soma(numero_inteiro_1,numero_inteiro_2) << "";
	return 0;
}

