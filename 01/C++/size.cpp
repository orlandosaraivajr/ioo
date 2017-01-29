/*
Programa:   TamanhoTipos
Arquivo:    size.cpp
*/
#include <iostream>
using namespace std;

int main()
{
   cout << "Tamanho do tipo char : " << sizeof(char) << endl;
   cout << "Tamanho do tipo wchar_t : " << sizeof(wchar_t) << endl;
   cout << "Tamanho do tipo string : " << sizeof(string) << endl;
   cout << "Tamanho do tipo int : " << sizeof(int) << endl;
   cout << "Tamanho do tipo short int : " << sizeof(short int) << endl;
   cout << "Tamanho do tipo long int : " << sizeof(long int) << endl;
   cout << "Tamanho do tipo float : " << sizeof(float) << endl;
   cout << "Tamanho do tipo double : " << sizeof(double) << endl;
   cout << "Tamanho do tipo bool : " << sizeof(bool) << endl;
   return 0;
}
