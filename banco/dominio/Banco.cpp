#include "Banco.hpp"

//definição obrigatória da variável static
Banco * Banco::banco;

Banco::Banco(){
}

void Banco::adicionarCliente(std::string p, std::string u){
    clientes.push_back(new Cliente(p, u));
}
Banco * Banco::getBanco(){
    if(banco == NULL){
        banco = new Banco();
    }
    return banco;
}
Cliente * Banco::getCliente(int indice){
    return clientes.at(indice);
}

int Banco::getNumeroDeClientes(){
    return clientes.size();
}
