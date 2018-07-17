#include <iostream>
#include <string>
#include "conta.hpp"

class Cliente{
    private:
        std::string primeiroNome;
        std::string ultimoNome;
        int numeroDeContas;
        Conta *conta[5];
    public:
        Cliente();
        Cliente(std::string p, std::string u);
        std::string getPrimeiroNome();
        std::string getUltimoNome();
        void adicionarConta(Conta *criarconta);
        Conta *getConta(int indice);
        int getNumeroDeContas();
        ~Cliente(){
            for(int i = 0; i < 5; i++){
               delete[] conta[i];
            }
        };
};
