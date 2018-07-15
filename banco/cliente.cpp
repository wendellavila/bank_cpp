#include "cliente.hpp"

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

Conta Cliente::getConta() {
    return *conta;
}

void Cliente::setConta(Conta conta) {
    this->conta = &conta;
}
