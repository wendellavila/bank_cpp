#include <iostream>

class Conta{
    private:
        double saldo;
    public:
        Conta(double saldoInicial);
        double getSaldo();
        bool depositar(double Valor);
        bool sacar(double Valor);
};
