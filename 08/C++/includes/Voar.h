/*
Programa:   Vingadores
Arquivo:    Voar.h
*/
#ifndef VOAR_H
#define VOAR_H

using namespace std;

class Voar {
private:
	float altitude = 0;

public:
	Voar();
	~Voar();

	void setAltitude(float);
	float getAltitude();

};

#endif
