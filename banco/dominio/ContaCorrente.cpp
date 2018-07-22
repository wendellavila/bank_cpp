#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(double saldo) :Conta(saldo){
}

ContaCorrente::ContaCorrente(double saldo, double protecao) :Conta(saldo){
    chequeEspecial = protecao;
}

void ContaCorrente::sacar(double total){
    //std::cout << "sacar contacorrente" << std::endl;
    if(total <= Conta::saldo) {
        Conta::saldo -= total;
    }
    else if(total <= Conta::saldo + chequeEspecial){
        double temp = chequeEspecial;
        chequeEspecial += (Conta::saldo - total);
        Conta::saldo -= total - temp;
    }
    else if((total > Conta::saldo + chequeEspecial) && (chequeEspecial != 0)){
        Conta::saldo = 0;
        throw ExcecaoChequeEspecial("O cheque especial não foi suficiente para cobrir o saque.", total);
    }
    else {
        throw ExcecaoChequeEspecial("Não há saldo suficiente e conta sem cheque especial.", total - (Conta::saldo + chequeEspecial));
    }
}
double ContaCorrente::getChequeEspecial(){
    return chequeEspecial;
}
