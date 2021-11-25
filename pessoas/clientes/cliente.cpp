#include "cliente.hpp"
#include <vector>
Cliente::Cliente() {}

Cliente::Cliente(string nome, string CPF, string tel, int qtdCompras) :Pessoa(nome, CPF, tel), qtdCompras(qtdCompras){

}
Cliente::~Cliente() {}
void Cliente::setQtdCompras(int qtdCompras) {
    this->qtdCompras = qtdCompras;
}
int Cliente::getQtdComrpras() const {
    return  qtdCompras;
}
void Cliente::imprimeClientesSimples(vector<Cliente> &vector){
    cout  <<endl <<   "           Clientes" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() << endl;
    }
}
void Cliente::imprimeClientesCompleto(vector<Cliente> &vector){
    cout  <<endl <<   "           Clientes" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() << "   tel:"<< vector[i].getTel()<< "   numero de compras:"<< vector[i].qtdCompras << endl;
    }
}
void Cliente::mostraCliente(vector<Cliente> &vector, string nome){
    for (int i = 0; i < vector.size(); ++i) {
        if (vector[i].getNome() == nome){
            cout<< "Nome do cliente: "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() << "   tel:"<< vector[i].getTel()<< "   numero de compras:"<< vector[i].qtdCompras << endl;
        }
    }
}


