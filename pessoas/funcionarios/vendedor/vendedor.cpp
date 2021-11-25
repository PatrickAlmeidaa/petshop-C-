#include "vendedor.hpp"
#include <iostream>
#include <vector>
#include "../funcionarios.hpp"

Vendedor::~Vendedor(){}

Vendedor::Vendedor(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
        Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}

void Vendedor::setUser(string user) {
    this->user = user;
}
void Vendedor::setSenha(string senha) {
    this->senha = senha;
}

string Vendedor::getUser() const {
    return user;
}
string Vendedor::getSenha() const {
    return senha;
}
void Vendedor::imprimeVendedoresSimples(vector<Vendedor> &vector){
    cout <<endl  << "           Vendedores" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF()<< endl;
    }
}
void Vendedor::imprimeVendedoresCompleto(vector<Vendedor> &vector){
    cout <<endl  << "           Vendedores" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() <<"   tel:"<< vector[i].getTel()<<"   salario:"<< vector[i].getSalario()<< endl;
    }
}
void Vendedor::removeVendedor(string nome, vector<Vendedor> &vector){
    int aux;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i].getNome() == nome){
            aux = i;
            break;
        }
    }
    Vendedor aux2 = Vendedor(vector[aux].getNome(), vector[aux].getCPF(), vector[aux].getTel(), vector[aux].getCargo(), vector[aux].getSalario());
    vector[aux] = Vendedor(vector[vector.size() - 1].getNome(), vector[vector.size() - 1].getCPF(), vector[vector.size() - 1].getTel(), vector[vector.size() - 1].getCargo(), vector[vector.size() - 1].getSalario());
    vector[vector.size() - 1] = Vendedor(aux2.getNome(), aux2.getCPF(), aux2.getTel(), aux2.getCargo(), aux2.getSalario());
    vector.pop_back();
}