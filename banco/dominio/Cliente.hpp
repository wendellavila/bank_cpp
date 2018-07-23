#include <iostream>
#include <vector>
#include <string>
#include "Conta.hpp"

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente{
    private:
        std::vector<Conta*> conta; //cria um arraylist de ponteiro de objeto
        std::string primeiroNome;
        std::string ultimoNome;
    public:
        Cliente();
        Cliente(std::string p, std::string u);
        std::string getPrimeiroNome();
        std::string getUltimoNome();
        void setConta(Conta *criarconta);
        Conta *getConta(int indice);
        int getNumeroDeContas();
        ~Cliente(){
            for(int i = 0; i < getNumeroDeContas(); i++){
                delete[] conta[i]; //destruir ponteiros dentro do vector conta
            }
        }
};

#endif // CLIENTE_H
