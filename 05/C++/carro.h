/*
Programa:   Carro
Arquivo:    carro.h
*/
#ifndef CARRO_H
#define CARRO_H

using namespace std; 

class Carro { 
    private: 
        string modelo; 
        string cor; 
        int ano; 
        float preco; 
        /* Atributo da Classe */
        static int totalCarros;

    public: 
        Carro();
        Carro(string,int,float,string);
        ~Carro();

        string getModelo();
        void setModelo(string);
        string getCor();
        void setCor(string);
        int getAno();
        void setAno(int);
        void setAno(string);
        float getPreco();
        void setPreco(float);
        void setPreco(string);
        void apresentacao();
  
        /* Método da classe */
        static int getTotal() { 
            return totalCarros;
        }
        static void mostrarTotalCarros() { 
            cout << "Total de carros: " << Carro::getTotal() << endl;
        }
} ; 

#endif