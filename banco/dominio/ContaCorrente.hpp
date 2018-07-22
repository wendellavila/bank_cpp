#include <iostream>
#include "Conta.hpp"
#include "ExcecaoChequeEspecial.hpp"

#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente : public Conta {
    protected:
        double chequeEspecial;
    public:
        ContaCorrente(double saldo);
        ContaCorrente(double saldo, double protecao);
        void sacar(double total);
        double getChequeEspecial();
};

#endif // CONTACORRENTE_H
