#include "banco.hpp"

//definição obrigatória da variável static
Banco * Banco::banco;

Banco::Banco(){
}

void Banco::adicionarCliente(std::string p, std::string u){
    int indice = getNumeroDeClientes();
    clientes[indice] = new Cliente(p, u);
    numeroDeClientes++;
}
Banco * Banco::getBanco(){
    if(banco == NULL){
        banco = new Banco();
    }
    return banco;
}
Cliente * Banco::getCliente(int indice){
    return clientes[indice];
}

int Banco::getNumeroDeClientes(){
    return numeroDeClientes;
}
