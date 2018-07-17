#include <iostream>
#include <string>
#include "cliente.hpp"

class Banco{
    private:
        Cliente *clientes[5]; //cria um array de ponteiro de objetos
        int numeroDeClientes;
    public:
        Banco();
        void adicionarCliente(std::string p, std::string u);
        Cliente *getCliente(int indice);
        int getNumeroDeClientes();
};
