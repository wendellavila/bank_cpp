#include <iostream>
#include "conta.hpp"

class ContaCorrente : public Conta {
    protected:
        double chequeEspecial;
    public:
        ContaCorrente(double saldo);
        ContaCorrente(double saldo, double protecao);
        bool sacar(double total);
        double getChequeEspecial();
};
