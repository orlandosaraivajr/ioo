/*
Programa:   AdHoc
Arquivo:    ad_hoc.cpp
*/
#include <iostream>

using namespace std;

void troca( int &a, int &b) {
	cout << "Troca de inteiros " << endl;
	int temp = a;
	a = b;
	b = temp;
}
void troca( float &a, float &b) {
	cout << "Troca de floats " << endl;
	int temp = a;
	a = b;
	b = temp;
}
void imprimir(int a,int b) {
	cout << "Número 1 =  " << a << endl;
	cout << "Número 2 =  " << b << endl;
}

int main() {
	int x1, x2;
	x1 = 10;
	x2 = 25;
	cout << "Exemplo de CAST =  " << (float)x2/x1 << endl;

	imprimir(x1,x2);
	troca(x1,x2);
	imprimir(x1,x2);

	float y1, y2;
	y1 = 10.4;
	y2 = 20.8;
	imprimir(y1,y2);
	troca(y1,y2);
	imprimir(y1,y2);

	return 0;
}
