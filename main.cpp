#include <iostream>
#include <string>
#include <iomanip> // std::setprecision
#include "banco/dominio/Banco.hpp"
#include "banco/dominio/Cliente.hpp"
#include "banco/dominio/ContaCorrente.hpp"
#include "banco/dominio/ContaPoupanca.hpp"
#include "banco/dominio/ExcecaoChequeEspecial.hpp"
#include "banco/relatorios/RelatorioClientes.hpp"

using namespace std;

int main(){

    Banco *banco = Banco::getBanco();
    Cliente *cliente;
    Conta *conta;

    //salvando contas em variáveis para deletar posteriormente
    ContaPoupanca *a = new ContaPoupanca(300.00, 0.05);
    ContaCorrente *b = new ContaCorrente(200.00, 300.00), *c = new ContaCorrente(200.00);

    // Cria dois clientes e suas contas
    banco->adicionarCliente("Jane", "Simms");
    cliente = banco->getCliente(0);
    cliente->setConta(a);
    cliente->setConta(b);
    banco->adicionarCliente("Owen", "Bryant");
    cliente = banco->getCliente(1);
    cliente->setConta(c);

    std::cout << std::fixed << std::setprecision(2); //definindo precisão do print do double em 2 casas decimais

    // Testa  a conta corrente de Jane Simms (com cheque especial)
    cliente = banco->getCliente(0);
    conta = cliente->getConta(1);
    cout << "Cliente [" << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " Tem um saldo em conta corrente de R$" << conta->getSaldo() << " , com cheque especial de R$ 500.00." << endl;

    try {
        cout << "Conta Corrente [Jane Simms] : Saque de R$ 150.00" << endl;
        conta->sacar(150.00);
        cout << "Conta Corrente [Jane Simms] : deposito de R$ 22.50" << endl;
        conta->depositar(22.50);
        cout << "Conta Corrente [Jane Simms] : Saque de R$ 147.62" << endl;
        conta->sacar(147.62);
        cout << "Conta Corrente [Jane Simms] : Saque de R$ 470.00" << endl;
        conta->sacar(470.00);
    }
    catch(ExcecaoChequeEspecial& e1){
        cout << e1.what() << "   Deficit: R$" << e1.getDeficit() << endl;
    }

    cout << "Cliente [" << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " Tem um saldo em conta corrente de R$" << conta->getSaldo() << endl << endl;


    // Testa a conta corrente de Owen Bryant (sem cheque especial)
    cliente = banco->getCliente(1);
    conta = cliente->getConta(0);
    cout << "Cliente [" << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " tem um saldo de R$" << conta->getSaldo() << endl;

    try {
        cout << "Conta Corrente [Owen Bryant] : Saque de R$ 100.00" << endl;
        conta->sacar(100.00);
        cout << "Conta Corrente [Owen Bryant] : deposito de R$ 25.00" << endl;
        conta->depositar(25.00);
        cout << "Conta Corrente [Owen Bryant] : Saque de R$ 175.00" << endl;
        conta->sacar(175.00);
    }
    catch(ExcecaoChequeEspecial& e1){
      cout << e1.what() << "   Deficit: R$" << e1.getDeficit() << endl;
    }

    cout << "Cliente [" << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << "]"
         << " Tem um saldo em conta corrente de R$" << conta->getSaldo() << endl;

    return 0;
}
