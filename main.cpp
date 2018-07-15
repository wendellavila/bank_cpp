#include <iostream>
#include "banco/cliente.hpp"

using namespace std;

int main(){
    // Cria uma conta com saldo de R$ 500,00.
    std::cout << "Criando a cliente Jane Smith." << std::endl;
    Cliente cliente("Jane", "Smith");
    std::cout << "firstname: " << cliente.getPrimeiroNome() << std::endl;
    std::cout << "Criando a conta de Jane Smith com saldo inicial de R$ 500,00." << std::endl;
    Conta conta(500.00);
    //cliente.setConta(conta);
    //conta = cliente.getConta();

    std::cout << "Sacando R$ 150,00 da conta de Jane Smith" << std::endl;
    conta.sacar(150.00);

    std::cout << "Depositando R$ 22,50 na conta de Jane Smith" << std::endl;
    conta.depositar(22.50);

    std::cout << "Sacando R$ 47,62 da conta de Jane Smith" << std::endl;
    conta.sacar(47.62);

    // Exibindo o saldo final na conta da cliente Jane Smith
    std::cout << "Cliente " << cliente.getPrimeiroNome()
               << " " << cliente.getUltimoNome() << " " << "tem um saldo de " << conta.getSaldo() << std::endl;
    return 0;
}
