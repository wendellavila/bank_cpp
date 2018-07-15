#include <iostream>

class Conta{
    private:
        double saldo;
    public:
        Conta(double saldoInicial);
        double getSaldo();
        void depositar(double Valor);
        void sacar(double Valor);
};
