#include "relatorioclientes.hpp"

void RelatorioClientes::geraRelatorio(){

    Banco *banco = Banco::getBanco();
    Cliente *cliente;

    // Gera um Relatorio
    std::cout << "\t\t\tRELATORIO DE CLIENTES" << std::endl;
    std::cout << "\t\t\t=======================" << std::endl;

    for (int indice = 0; indice < banco->getNumeroDeClientes(); indice++) {
        cliente = banco->getCliente(indice);

        std::cout << std::endl << "Cliente: " << cliente->getUltimoNome() << ", " << cliente->getPrimeiroNome() << std::endl;

        for (int indiceConta = 0; indiceConta < cliente->getNumeroDeContas(); indiceConta++){
            Conta *conta = cliente->getConta(indiceConta);
            std::string tipoConta = "aa";

            //instanceof
            if(dynamic_cast<ContaCorrente*>(conta) != nullptr){
                tipoConta = "Conta Corrente";
            }
            else if(dynamic_cast<ContaPoupanca*>(conta) != nullptr){
                tipoConta = "Conta Poupança";
            }

            std::cout << std::fixed << std::setprecision(2); //definindo precisão do print do double em 2 casas decimais
            std::cout << tipoConta << ": Saldo atual de R$" << conta->getSaldo() << std::endl;

        }
    }
}
