#include "conta.hpp"

Conta::Conta(){
}

Conta::Conta(double saldoInicial){
    saldo = saldoInicial;
}

bool Conta::depositar(double valor){
    saldo += valor;
    return true;
}
bool Conta::sacar(double valor){
    //std::cout << "sacar conta" << std::endl;
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
double Conta::getChequeEspecial(){
    return 0;
}

double Conta::getSaldo() {
    return saldo;
}
