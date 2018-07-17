#include <iostream>
#include <string>
#include <iomanip>
#include "dominio/banco.hpp"
#include "dominio/contacorrente.hpp"
#include "dominio/contapoupanca.hpp"

using namespace std;

int main(){

    Banco banco;
    Cliente *cliente;
    Conta* conta;

    //Conta conta;

    // Cria dois clientes e suas contas
    banco.adicionarCliente("Jane", "Simms");
    cliente = banco.getCliente(0);
    cliente->setContaPoupanca(new ContaPoupanca(500.00, 0.05));
    cliente->setContaCorrente(new ContaCorrente(200.00, cliente->getContaPoupanca() ));
    banco.adicionarCliente("Owen", "Bryant");
    cliente = banco.getCliente(1);
    cliente->setContaCorrente(new ContaCorrente(200.00));

    // Testa a conta corrente de Jane Simms (com protecao de saque)
    cliente = banco.getCliente(0);
    conta = cliente->getContaCorrente();
    cout << "Verificando a conta de Jane Simms : saque de R$ 150,00? " << conta->sacar(150.00) << endl;
    cout << "Verificando a conta corrente de Jane Simms : depósito de R$ 22,50? " << conta->depositar(22.50) << endl;
    cout << "Conta corrente de Jane Simms : saque de R$ 147,62? " << conta->sacar(147.62) << endl;
    cout << "Cliente " << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " tem um saldo em conta corrente de R$ " << conta->getSaldo() << " e um saldo em conta poupanca de R$ "
         << cliente->getContaPoupanca()->getSaldo() << endl << endl;

    // Testa a conta corrente de Owen Bryant (Sem protecao especial)
    cliente = banco.getCliente(1);
    conta = cliente->getContaCorrente();
    cout << "Conta Corrente de Owen Bryant : saque de R$ 100,00? " << conta->sacar(100.00) << endl;
    cout << "Conta corrente de Owen Bryant : depósito de R$ 25,00? " << conta->depositar(25.00) << endl;
    cout << "Conta Corrente de Owen Bryant : saque de R$ 175,00? " << conta->sacar(175.00) << endl;
    cout << "Cliente [" << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " tem um saldo em conta corrente de R$ " << conta->getSaldo() << endl << endl;

    return 0;
}
