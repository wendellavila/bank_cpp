#include <iostream>
#include "banco/banco.hpp"
#include "banco/contacorrente.hpp"
#include "banco/contapoupanca.hpp"

using namespace std;

int main(){

    Banco bank;
    Cliente *cliente;
    Conta* conta;

    // Cria os clientes e suas respectivas contas

    std::cout << "Criando a cliente Jane Smith." << std::endl;
    bank.adicionarCliente("Jane", "Smith");
    cliente = bank.getCliente(0);
    std::cout << "Criando sua conta poupanca com saldo de R$ 500,00 e 3% de juros." << std::endl;
    cliente->setConta(new ContaPoupanca(500.00, 0.03));

    std::cout << "Criando o cliente Owen Bryant." << std::endl;
    bank.adicionarCliente("Owen", "Bryant");
    cliente = bank.getCliente(1);
    std::cout << "Criando sua conta corrente com saldo de R$ 500,00 e sem cheque especial." << std::endl;
    cliente->setConta(new ContaCorrente(500.00));

    std::cout << "Criando o cliente Tim Soley." << std::endl;
    bank.adicionarCliente("Tim", "Soley");
    cliente = bank.getCliente(2);
    std::cout << "Criando sua conta corrente com saldo de R$ 500,00 e R$ 500,00 de cheque especial." << std::endl;
    cliente->setConta(new ContaCorrente(500.00, 500.00));
    std::cout << "Criando a cliente Maria Soley." << std::endl;
    bank.adicionarCliente("Maria", "Soley");
    cliente = bank.getCliente(3);
    std::cout << "Maria divide sua conta corrente com seu marido Tim." << std::endl;
    cliente->setConta(bank.getCliente(2)->getConta());

    std::cout << std::endl;

    //Demonstra o comportamento dos varios tipos de conta

    // Testando uma conta poupanca
    std::cout << "Recuperando a cliente Jane Smith com sua conta poupanca." << std::endl;
    cliente = bank.getCliente(0);
    conta = cliente->getConta();
    // Executa alguams transacoes na conta
    std::cout << "Saque de R$ 150,00: " << conta->sacar(150.00) << std::endl;
    std::cout << "Deposito de R$ 22,50: " << conta->depositar(22.50) << std::endl;
    std::cout << "Saque de R$ 47.62: " << conta->sacar(47.62) << std::endl;
    std::cout << "Saque de R$ 400.00: " << conta->sacar(400.00) << std::endl;
    // Exibe o saldo final na conta
    std::cout << "Cliente [" << cliente->getUltimoNome()
		       << ", " << cliente->getPrimeiroNome()
		       << "] tem o saldo de  " << conta->getSaldo() << std::endl;
    if(conta->getChequeEspecial() > 0) {
    	std::cout << "Com cheque especial de " << conta->getChequeEspecial() << std::endl;
    }

    std::cout << endl;

    // Testa uma conta corrente sem cheque especial
    std::cout << "Recuperando o cliente Owen Bryant com sua conta corrente sem cheque especial." << std::endl;
    cliente = bank.getCliente(1);
    conta = cliente->getConta();

    // Executa algumas transacoes
    std::cout << "Saque de R$ 150.00: " << conta->sacar(150.00) << std::endl;
    std::cout << "deposito de R$  22.50: " << conta->depositar(22.50) << std::endl;
    std::cout << "Saque de R$ 47.62: " << conta->sacar(47.62) << std::endl;
    std::cout << "Saque de R$ 400.00: " << conta->sacar(400.00) << std::endl;
    // Exibe o saldo final em conta
    std::cout << "Cliente [" << cliente->getUltimoNome()
		       << ", " << cliente->getPrimeiroNome()
		       << "] tem o saldo de  " << conta->getSaldo() << std::endl;
    if(conta->getChequeEspecial() > 0) {
    	std::cout << "Com cheque especial de " << conta->getChequeEspecial() << std::endl;
    }

    std::cout << endl;

    // Testando uma conta corrente com cheque especial
    std::cout << "Recuperando o cliente Tim Soley com sua conta corrente que possui cheque especial." << std::endl;
    cliente = bank.getCliente(2);
    conta = cliente->getConta();
    // Executa algumas transacoes
    std::cout << "Saque de R$ 150.00: " << conta->sacar(150.00) << std::endl;
    std::cout << "deposito de R$  22.50: " << conta->depositar(22.50) << std::endl;
    std::cout << "Saque de R$ 47.62: " << conta->sacar(47.62) << std::endl;
    std::cout << "Saque de R$ 400.00: " << conta->sacar(400.00) << std::endl;
    // Exibe o saldo final em conta
    std::cout << "Cliente [" << cliente->getUltimoNome()
		       << ", " << cliente->getPrimeiroNome()
		       << "] tem o saldo de  " << conta->getSaldo() << std::endl;
    if(conta->getChequeEspecial() > 0) {
    	std::cout << "Com cheque especial de " << conta->getChequeEspecial() << std::endl;
    }

    std::cout << endl;

    // Testando uma conta corrente com cheque especial
    std::cout << "Recuperando a cliente Maria Soley com sua conta conjunta com o marido Tim." << std::endl;
    cliente = bank.getCliente(3);
    conta = cliente->getConta();
    // Executa algumas transacoes
    std::cout << "deposito de R$  150.00: " << conta->depositar(150.00) << std::endl;
    std::cout << "Saque de R$ 750.00: " << conta->sacar(750.00) << std::endl;
    // Exibe o saldo final em conta
    std::cout << "Cliente [" << cliente->getUltimoNome()
		       << ", " << cliente->getPrimeiroNome()
		       << "] tem o saldo de  " << conta->getSaldo() << std::endl;
    if(conta->getChequeEspecial() > 0) {
    	std::cout << "Com cheque especial de " << conta->getChequeEspecial() << std::endl;
    }

    return 0;
}
