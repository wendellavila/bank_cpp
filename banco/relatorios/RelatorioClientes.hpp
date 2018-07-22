#include <iostream>
#include <string>
#include <iomanip> // std::setprecision
#include "../dominio/Banco.hpp"
#include "../dominio/Cliente.hpp"
#include "../dominio/ContaCorrente.hpp"
#include "../dominio/ContaPoupanca.hpp"

#ifndef RELATORIOCLIENTES_H
#define RELATORIOCLIENTES_H

class RelatorioClientes{
    public:
        void geraRelatorio();
};

#endif // RELATORIOCLIENTES_H
