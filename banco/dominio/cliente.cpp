#include "cliente.hpp"

Cliente::Cliente(){
}

Cliente::Cliente(std::string p, std::string u){
    this->primeiroNome = p;
    this->ultimoNome = u;
}

std::string Cliente::getPrimeiroNome(){
    return primeiroNome;
}

std::string Cliente::getUltimoNome(){
    return ultimoNome;
}

void Cliente::setContaPoupanca(ContaPoupanca *criarconta){
    contaPoupanca = criarconta;
}

void Cliente::setContaCorrente(ContaCorrente *criarconta){
    contaCorrente = criarconta;
}

ContaCorrente * Cliente::getContaCorrente(){
    return contaCorrente;
}

ContaPoupanca * Cliente::getContaPoupanca(){
    return contaPoupanca;
}
