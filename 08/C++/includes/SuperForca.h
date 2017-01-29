/*
Programa:   Vingadores
Arquivo:    SuperForca.h
*/
#ifndef SUPERFORCA_H
#define SUPERFORCA_H

using namespace std;

class SuperForca {
private:
	float forca = 100;

public:
	SuperForca();
	~SuperForca();

	void setForca(float);
	float getForca();

};

#endif
