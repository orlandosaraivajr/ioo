/*
Programa:   cadastro
Arquivo:    main.cpp
*/
#include <iostream> 
#include "parametros.h"
#include "cadastro.h"

using namespace std; 

int main() { 
	Pessoa cadastro[N]; 
	int x; 
	for(x=0 ; x < N; x++ ) { 
		cadastro[x].cadastrar(); 
	} 

	for(x=0 ; x < N; x++ ) { 
		cadastro[x].mostrar(); 
	} 
	return 0; 
} 
