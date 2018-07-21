#include <iostream>
#include <string>
#include "cliente.hpp"

#ifndef BANCO_H
#define BANCO_H

class Banco{
    private:
        Cliente *clientes[5]; //cria um array de ponteiro de objetos
        int numeroDeClientes;
        static Banco *banco;
    public:
        Banco();
        static Banco *getBanco();
        void adicionarCliente(std::string p, std::string u);
        Cliente *getCliente(int indice);
        int getNumeroDeClientes();
};

#endif // BANCO_H
