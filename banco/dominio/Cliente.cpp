#include "Cliente.hpp"

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

void Cliente::setConta(Conta *criarconta) {
    conta.push_back(criarconta);
}

Conta * Cliente::getConta(int indice) {
    return conta.at(indice);
}

int Cliente::getNumeroDeContas(){
    return conta.size();
}
