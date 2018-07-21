#include <iostream>
#include <string>
#include "dominio/banco.hpp"
#include "dominio/cliente.hpp"
#include "dominio/contacorrente.hpp"
#include "dominio/contapoupanca.hpp"
#include "relatorios/relatorioclientes.hpp"


using namespace std;

int main(){

    Banco *banco = Banco::getBanco();
    Cliente *cliente;
    RelatorioClientes relatorio;
    //Conta* conta;

    // Cria varios clientes e suas respectivas contas
    banco->adicionarCliente("Jane", "Simms");
    cliente = banco->getCliente(0);
    cliente->adicionarConta(new ContaPoupanca(500.00, 0.05));
    cliente->adicionarConta(new ContaCorrente(200.00, 400.00));

    banco->adicionarCliente("Owen", "Bryant");
    cliente = banco->getCliente(1);
    cliente->adicionarConta(new ContaCorrente(200.00));

    banco->adicionarCliente("Tim", "Soley");
    cliente = banco->getCliente(2);
    cliente->adicionarConta(new ContaPoupanca(1500.00, 0.05));
    cliente->adicionarConta(new ContaCorrente(200.00));

    banco->adicionarCliente("Maria", "Soley");
    cliente = banco->getCliente(3);
    // Maria e Tim possuem uma conta conjunta
    cliente->adicionarConta(banco->getCliente(2)->getConta(1));
    cliente->adicionarConta(new ContaPoupanca(150.00, 0.05));

    relatorio.geraRelatorio();

    return 0;
}
