#include <iostream>
#include <string>
#include "banco/banco.hpp"
#include "banco/contacorrente.hpp"
#include "banco/contapoupanca.hpp"

using namespace std;

int main(){

    Banco banco;
    Cliente *cliente;
    //Conta* conta;

    //Banco banco = new Banco();
    //Cliente cliente;

    // Cria varios clientes e suas respectivas contas
    banco.adicionarCliente("Jane", "Simms");
    cliente = banco.getCliente(0);
    cliente->adicionarConta(new ContaPoupanca(500.00, 0.05));
    cliente->adicionarConta(new ContaCorrente(200.00, 400.00));

    banco.adicionarCliente("Owen", "Bryant");
    cliente = banco.getCliente(1);
    cliente->adicionarConta(new ContaCorrente(200.00));

    banco.adicionarCliente("Tim", "Soley");
    cliente = banco.getCliente(2);
    cliente->adicionarConta(new ContaPoupanca(1500.00, 0.05));
    cliente->adicionarConta(new ContaCorrente(200.00));

    banco.adicionarCliente("Maria", "Soley");
    cliente = banco.getCliente(3);
    // Maria e Tim possuem uma conta conjunta
    cliente->adicionarConta(banco.getCliente(2)->getConta(1));
    cliente->adicionarConta(new ContaPoupanca(150.00, 0.05));

    // Gera um Relatorio
    cout << "\t\t\tRELATORIO DE CLIENTES" << endl;
    cout << "\t\t\t=======================" << endl;

    for (int indice = 0; indice < banco.getNumeroDeClientes(); indice++) {
        cliente = banco.getCliente(indice);

        cout << endl;
        cout << "Cliente: " << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << endl;

        for (int indiceConta = 0; indiceConta < cliente->getNumeroDeContas(); indiceConta++){
            Conta *conta = cliente->getConta(indiceConta);
            string tipoConta = "aa";

            //instanceof
            if(dynamic_cast<ContaCorrente*>(conta) != nullptr){
                tipoConta = "Conta Corrente";
            }
            else if(dynamic_cast<ContaPoupanca*>(conta) != nullptr){
                tipoConta = "Conta Poupança";
            }

            cout << "O saldo da " << tipoConta << " é de R$ " << conta->getSaldo() << endl;

        }
    }

    return 0;
}
