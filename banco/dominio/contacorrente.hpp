#include <iostream>
#include "conta.hpp"
#include "contapoupanca.hpp"
#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente : public Conta {
    private:
        ContaPoupanca *protegidoPor;
    public:
        ContaCorrente(double saldo);
        ContaCorrente(double saldo, ContaPoupanca *prot);
        bool sacar(double total);
        double getChequeEspecial();
};

#endif // CONTACORRENTE_H
