#include "veterinario.hpp"
#include <iostream>

Veterinario::Veterinario(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
        Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}
Veterinario::~Veterinario() {}

void Veterinario::setUser(string user) {
    this->user = user;
}
void Veterinario::setSenha(string senha) {
    this->senha = senha;
}

string Veterinario::getUser() const {
    return user;
}
string Veterinario::getSenha() const {
    return senha;
}

void Veterinario::imprimeVeterinarioSimples(vector<Veterinario> &vector){
    cout <<endl  << "           Veterinario" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF()<< endl;
    }
}
void Veterinario::imprimeVeterinarioCompleto(vector<Veterinario> &vector){
    cout <<endl  << "           Veterinario" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() <<"   tel:"<< vector[i].getTel()<<"   salario:"<< vector[i].getSalario()<< endl;
    }
}
void Veterinario::removeVeterinario(string nome, vector<Veterinario> &vector){
    int aux;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i].getNome() == nome){
            aux = i;
            break;
        }
    }
    Veterinario aux2 = Veterinario(vector[aux].getNome(), vector[aux].getCPF(), vector[aux].getTel(), vector[aux].getCargo(), vector[aux].getSalario());
    vector[aux] = Veterinario(vector[vector.size() - 1].getNome(), vector[vector.size() - 1].getCPF(), vector[vector.size() - 1].getTel(), vector[vector.size() - 1].getCargo(), vector[vector.size() - 1].getSalario());
    vector[vector.size() - 1] = Veterinario(aux2.getNome(), aux2.getCPF(), aux2.getTel(), aux2.getCargo(), aux2.getSalario());
    vector.pop_back();
}