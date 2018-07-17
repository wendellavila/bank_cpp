#include <iostream>
#include <string>
#include "conta.hpp"
#include "contacorrente.hpp"
#include "contapoupanca.hpp"

class Cliente{
    private:
        std::string primeiroNome;
        std::string ultimoNome;
        ContaPoupanca *contaPoupanca;
        ContaCorrente *contaCorrente;
    public:
        Cliente();
        Cliente(std::string p, std::string u);
        std::string getPrimeiroNome();
        std::string getUltimoNome();
        ContaPoupanca *getContaPoupanca();
        ContaCorrente *getContaCorrente();
        void setContaPoupanca(ContaPoupanca *criarconta);
        void setContaCorrente(ContaCorrente *criarconta);
};
