#include <iostream>
#include <string>
#include <iomanip> // std::setprecision
#include "../dominio/banco.hpp"
#include "../dominio/cliente.hpp"
#include "../dominio/contacorrente.hpp"
#include "../dominio/contapoupanca.hpp"

#ifndef RELATORIOCLIENTES_H
#define RELATORIOCLIENTES_H

class RelatorioClientes{
    public:
        void geraRelatorio();
};

#endif // RELATORIOCLIENTES_H
