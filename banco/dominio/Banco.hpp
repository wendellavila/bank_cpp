#include <iostream>
#include <vector>
#include <string>
#include "Cliente.hpp"

#ifndef BANCO_H
#define BANCO_H

class Banco{
    private:
        std::vector<Cliente*> clientes; //cria um arraylist de ponteiro de objeto
        static Banco *banco;
    public:
        Banco();
        static Banco *getBanco();
        void adicionarCliente(std::string p, std::string u);
        Cliente *getCliente(int indice);
        int getNumeroDeClientes();
        ~Banco(){
            for(int i = 0; i < getNumeroDeClientes(); i++){
                delete[] clientes[i]; //destruir ponteiros dentro do vector clientes
            }
        }
};

#endif // BANCO_H
