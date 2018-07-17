#include "contacorrente.hpp"

ContaCorrente::ContaCorrente(double saldo) :Conta(saldo){
}

ContaCorrente::ContaCorrente(double saldo, ContaPoupanca *prot) :Conta(saldo){
    protegidoPor = prot;
}

bool ContaCorrente::sacar(double total){
    //std::cout << "sacar contacorrente" << std::endl;
    if(total <= Conta::saldo) {
        Conta::saldo -= total;
        return true;
    }
    else if(protegidoPor != NULL && total <= Conta::saldo + protegidoPor->getSaldo()){
        protegidoPor->sacar(total - Conta::saldo);
        Conta::saldo = 0;
        return true;
    }
    else {
        return false;
    }
}
