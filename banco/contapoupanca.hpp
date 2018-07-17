#include <iostream>
#include "conta.hpp"

class ContaPoupanca : public Conta {
    protected:
        double taxaJuros;
    public:
        ContaPoupanca(double saldo, double taxa);
};
