#include "conta.hpp"

double Conta::getSaldo() {
    return saldo;
}

Conta::Conta(double saldoInicial){
    this->saldo = saldoInicial;
}

void Conta::depositar(double valor){
    saldo += valor;
}
void Conta::sacar(double valor){
    if(valor <= saldo) {
        saldo -= valor;
    }
    else {
        valor = saldo;
        saldo -= valor;
    }
}
