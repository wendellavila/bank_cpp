#include "contacorrente.hpp"

ContaCorrente::ContaCorrente(double saldo) :Conta(saldo){
}

ContaCorrente::ContaCorrente(double saldo, double protecao) :Conta(saldo){
    chequeEspecial = protecao;
}

bool ContaCorrente::sacar(double total){
    //std::cout << "sacar contacorrente" << std::endl;
    if(total <= Conta::saldo) {
        Conta::saldo -= total;
        return true;
    }
    else if(total <= Conta::saldo + chequeEspecial){
        chequeEspecial -= (total - Conta::saldo);
        Conta::saldo -= total;
        return true;
    }
    else {
        return false;
    }
}
double ContaCorrente::getChequeEspecial(){
    return chequeEspecial;
}
