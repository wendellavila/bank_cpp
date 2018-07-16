#include <iostream>
#include <string>
#include "cliente.hpp"

class Banco{
    private:
        Cliente clientes[5]; //cria um array de objetos vazios usando o construtor padrão
        int numeroDeClientes;
    public:
        Banco();
        void adicionarCliente(std::string p, std::string u);
        Cliente getCliente(int indice);
        int getNumeroDeClientes();
};
