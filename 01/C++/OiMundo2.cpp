/*
Programa:   OiMundo2
Arquivo:    OiMundo2.cpp
*/
#include <iostream>

using namespace std;

void nome() 
{
	string nome;
	cout << "Digite seu nome: \n";
	cin >> nome;
	cout << "Oi " << nome << ", como vai você ?\n\n";
}

int main() {
	nome();
	return 0;
}

