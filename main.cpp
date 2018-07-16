#include <iostream>
#include "banco/banco.hpp"

using namespace std;

int main(){

    Banco banco;

    banco.adicionarCliente("Jane", "Simms");
    banco.adicionarCliente("Owen", "Bryant");
    banco.adicionarCliente("Tim", "Soley");
    banco.adicionarCliente("Maria", "Soley");

    for(int i = 0; i < banco.getNumeroDeClientes(); i++){

      Cliente cliente = banco.getCliente(i);

      cout << "Cliente [" << (i+1) << "] e " << cliente.getUltimoNome() << ", " << cliente.getPrimeiroNome() << endl;
    }
    return 0;
}
