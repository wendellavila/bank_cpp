#include "cliente.hpp"

Cliente::Cliente() {
}

Cliente::Cliente(std::string p, std::string u) {
    this->primeiroNome = p;
    this->ultimoNome = u;
}

std::string Cliente::getPrimeiroNome() {
    return primeiroNome;
}

std::string Cliente::getUltimoNome() {
    return ultimoNome;
}

void Cliente::adicionarConta(Conta *criarconta) {
    conta[numeroDeContas] = criarconta;
    numeroDeContas++;
}

Conta * Cliente::getConta(int indice) {
    return conta[indice];
}

int Cliente::getNumeroDeContas(){
    return numeroDeContas;
}
