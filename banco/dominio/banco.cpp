#include "banco.hpp"

Banco::Banco() {
}

void Banco::adicionarCliente(std::string p, std::string u){
    int indice = getNumeroDeClientes();
    clientes[indice] = new Cliente(p, u); //funcao extra que seta os dados de um objeto ja existente.
    this->numeroDeClientes++;
}
Cliente * Banco::getCliente(int indice){
    return clientes[indice];
}

int Banco::getNumeroDeClientes(){
    return numeroDeClientes;
}
