#include <iostream>
#include <string>
#include "conta.hpp"

class Cliente{
    private:
        std::string primeiroNome;
        std::string ultimoNome;
        Conta *conta;
    public:
        Cliente();
        Cliente(std::string p, std::string u);
        std::string getPrimeiroNome();
        std::string getUltimoNome();
        Conta getConta();
        void setConta(Conta conta);
        void setCliente(std::string p, std::string u);
};