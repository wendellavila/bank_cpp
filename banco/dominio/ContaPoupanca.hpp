#include <iostream>
#include "Conta.hpp"

#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

class ContaPoupanca : public Conta {
    protected:
        double taxaJuros;
    public:
        ContaPoupanca(double saldo, double taxa);
};

#endif // CONTAPOUPANCA_H
