/*
Programa:   Transformers
Arquivo:    inclusao.cpp
*/
#include <iostream>

using namespace std;
class Transformers 
{
public:
    virtual void emite_som() {}
    void ativar() {
        this->transformado = true;
    }
    void desativar(){
        this->transformado = false;
    }
    bool getStatusAtivado(){
        return this->transformado;
    }
protected:
    bool transformado = false;
};

class Camaro: public Transformers
{
public:
    void emite_som()
    {
        if (Transformers::getStatusAtivado()) {
            cout << "sou o Bumbeblee !!"<< endl;
        } else {
            cout << "VRRRRRrrruummmmmm"<< endl;
        }
    }
    void ativar() {
        cout << "Transformando em Bumbeblee"<< endl;
        Transformers::ativar();
    }
};

class Caminhao: public Transformers
{
public:
    void emite_som()
    {
        if (getStatusAtivado()) {
            cout << "Sou o Optimus Prime !!"<< endl;
        } else {
            cout << "VRRRRRrrruummmmmm !!!"<< endl;
        }      
    }
};

class Uno: public Transformers
{
public:
    void emite_som()
    {
        if (getStatusAtivado()) {
            cout << "Sou uma churrasqueira George Foreman."<< endl;
            cout << "O que você esperava. Sou um transformers de Fiat Uno ???"<< endl;
        } else {
            cout << "sem ronco de motor... não liga... "<< endl;
        }      
    }
};
 
int main(void)
{
    Transformers *generico; 
    Camaro carro;
    Caminhao caminhao;
    Uno carro2;
 
    generico = &carro;
    generico->emite_som(); 
    generico->ativar(); 
    generico->emite_som(); 
    generico->desativar(); 
    generico->emite_som(); 
    cout << "\n ======================== \n";

    generico = &caminhao;
    generico->emite_som(); 
    generico->ativar(); 
    generico->emite_som(); 
    generico->desativar(); 
    generico->emite_som(); 
    cout << "\n ======================== \n";

    generico = &carro2;
    generico->emite_som(); 
    generico->ativar(); 
    generico->emite_som(); 
    generico->desativar(); 
    generico->emite_som(); 

    generico = NULL;
    return 0;
}
