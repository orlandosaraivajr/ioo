/*
Programa:   Vingadores
Arquivo:    Main.cpp
*/
#include <iostream>
#include "includes/Hulk.h" 
#include "includes/IronMan.h" 

using namespace std;

int main() {
	Hulk *bruce = new Hulk();

	bruce->getDados();

	bruce->ficarNervoso();
	bruce->getDados();

	bruce->vaiPescar();
	bruce->getDados();

	delete bruce;
cout << "**************************" << endl;
	IronMan *RobertDowneyJr = new IronMan();

	RobertDowneyJr->ativarArmadura(); 

	if(RobertDowneyJr->getStatusArmadura()) {
		RobertDowneyJr->setAltitude(100);
		RobertDowneyJr->setForca(1500);
	}

	cout << "	Altitude atual: " << RobertDowneyJr->getAltitude() << endl;
	cout << "	SuperForça atual: " << RobertDowneyJr->getForca()<< endl;

	RobertDowneyJr->desativarArmadura(); 	

	cout << "	Altitude atual: " << RobertDowneyJr->getAltitude() << endl;
	cout << "	SuperForça atual: " << RobertDowneyJr->getForca()<< endl;

	delete RobertDowneyJr;
	return 0;
}
