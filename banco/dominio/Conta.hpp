#include <iostream>
#include "ExcecaoChequeEspecial.hpp"

#ifndef CONTA_H
#define CONTA_H

class Conta{
    protected:
        double saldo;
    public:
        Conta();
        Conta(double saldoInicial);
        double getSaldo();
        bool depositar(double Valor);
        virtual void sacar(double Valor);
        double getChequeEspecial();
};

#endif // CONTA_H
