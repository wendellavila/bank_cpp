#include "cliente.hpp"

Cliente::Cliente() {
    conta = new Conta(0);
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

void Cliente::setConta(Conta *conta) {
    this->conta = conta;
}

Conta * Cliente::getConta() {
    return conta;
}
