#include "Conta.hpp"

Conta::Conta(){
}

Conta::Conta(double saldoInicial){
    saldo = saldoInicial;
}

bool Conta::depositar(double valor){
    saldo += valor;
    return true;
}
void Conta::sacar(double valor){
    //std::cout << "sacar conta" << std::endl;
    if(valor <= saldo) {
        saldo -= valor;
    }
    else {
        throw ExcecaoChequeEspecial("Saldo insuficiente.", valor);
    }
}
double Conta::getChequeEspecial(){
    return 0;
}

double Conta::getSaldo() {
    return saldo;
}
