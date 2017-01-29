/*
Programa:   Matrix
Arquivo:    matrix.cpp
*/
#include <iostream>

using namespace std;

class Agente
{
    private:
        string nome;
        bool modo_agente = false;
        bool get_mode(){
            return this->modo_agente;
        }
    protected:
        string profissao;
    public:
        void set_nome(string nome)
        {
            this->nome = nome;
        }
        void mode_on() {
            this->modo_agente = true;
        }
        void apresentacao()
        {
            if(this->get_mode()){
                cout << "AGENTE SMITH !!!!" << endl;
            } else {
                cout << "\n Olá ! Meu nome é " << this->nome << endl;
            }
        }
//        virtual void set_profissao() = 0;
};
class Empresario: public Agente {
    private:
        string empresa;
    public:
        Empresario(string nome, string empresa) {
            set_nome(nome);
            this->empresa = empresa;
//            this->set_profissao();
        }
        void apresentacao()
        {
            Agente::apresentacao();
            cout << "sou executivo da " << this->empresa << endl;
        }
//        void set_profissao(){   this->profissao = "Empresário";    }
};
class Professor : public Agente
{
    private:
        string escola;
    public:
        Professor(string nome, string escola) {
             set_nome(nome);
            this->escola = escola;
//            this->set_profissao();
        }
        void apresentacao()
        {
            Agente::apresentacao();
            cout << "Leciono na escola " << this->escola << endl;
        }
//        void set_profissao(){   this->profissao = "Professor";     }
} ;
class Advogado : public Agente
{
    private:
        string OAB;
    public:
        Advogado(string nome, string OAB) {
            set_nome(nome);
            this->OAB = OAB;
//            this->set_profissao();
        }
        void apresentacao()
        {
            Agente::apresentacao();
            cout << "sou advogado e meu OAB é: " << this->OAB << endl;
        }
//        void set_profissao(){ this->profissao = "Advogado";        }
} ;
