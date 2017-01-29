/*
Programa:   Coercao
Arquivo:    coercao.cpp
*/
#include <iostream>

int main() {
	int i;
	char c = 'a';
	float x;
	i = c;
	c = i + 1;
	x = i;
	i = x / 7;
	std::cout << c << std::endl;
	std::cout << x << std::endl;
	std::cout << i << std::endl;
}
