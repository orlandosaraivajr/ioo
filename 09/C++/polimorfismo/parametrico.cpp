/*
Programa:   Parametrico
Arquivo:    parametrico.cpp
*/
#include <iostream>
using namespace std;

template <typename T>
void troca( T &a, T &b) {
    cout << "Troca !" << endl;
    T temp = a;
    a = b;
    b = temp;
}

int main() {
// Inteiros
    int x1 = 10, x2 = 20;
    cout << " x1 = " << x1  << endl << " x2 = " << x2  << endl;
    troca(x1,x2);
    cout << " x1 = " << x1  << endl << " x2 = " << x2  << endl;
// Float
    float y1 = 10.4, y2 = 20.8;
    cout << " y1 = " << y1  << endl << " y2 = " << y2  << endl;
    troca(y1,y2);
    cout << " y1 = " << y1  << endl << " y2 = " << y2  << endl;
// string
    string s1, s2;
    s1 = "Oi";
    s2 = "Mundo!";
    cout << " s1 = " << s1  << endl << " s2 = " << s2  << endl;
    troca(s1,s2);
    cout << " s1 = " << s1  << endl << " s2 = " << s2  << endl;
    return 0;
}
