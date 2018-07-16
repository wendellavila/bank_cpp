#include "conta.hpp"

double Conta::getSaldo() {
    return saldo;
}

Conta::Conta(double saldoInicial){
    this->saldo = saldoInicial;
}

bool Conta::depositar(double valor){
    saldo += valor;
    return true;
}
bool Conta::sacar(double valor){
    if(valor <= saldo) {
        saldo -= valor;
        return true;
    }
    else {
        //valor = saldo;
        //saldo -= valor;
        return false;
    }
}
