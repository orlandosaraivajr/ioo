/*
Programa:   Atribuicao
Arquivo:    Atribuicao.cpp
*/
#include <iostream>

using namespace std;

int main() {
	int x,y = 0;
	cout << "1)  O valor de x: " << x << " e o valor de y: " << y << "\n";
	x = x + 4;
	y += 4;		// Operador de Atribuição 
	cout << "2)  O valor de x: " << x << " e o valor de y: " << y << "\n";
	x = x - 2;
	y -= 2;		// Operador de Atribuição 
	cout << "3)  O valor de x: " << x << " e o valor de y: " << y << "\n";
	x = x * 5;
	y *= 5;		// Operador de Atribuição 
	cout << "4)  O valor de x: " << x << " e o valor de y: " << y << "\n";
	x = x / 2;
	y /= 2;		// Operador de Atribuição 
	cout << "5)  O valor de x: " << x << " e o valor de y: " << y << "\n";
	x = x % 2;
	y %= 2;		// Operador de Atribuição 
	cout << "6)  O valor de x: " << x << " e o valor de y: " << y << "\n";

	++x;	// pré-incremento
	y++; 	// pós-incremento
	cout << "O valor de x: " << x << " e o valor de y: " << y << "\n";
	--x;	// pré-decremento
	y--; 	// pós-decremento
	cout << "O valor de x: " << x << " e o valor de y: " << y << "\n";

	int z = 5;
	// Uso de atribuição condicional
	x = (z > 10 ? 10 : 20);
/*
	if (z > 10) {
		x = 10;
	} else {
		x = 20;
	}
*/
	z = 15;
	y = (z > 10 ? 10 : 20);
	cout << "O valor de x: " << x << " e o valor de y: " << y << "\n";
	return 0;
}

