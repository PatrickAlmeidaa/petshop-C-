#include <iostream>
#include "admin.hpp"

Admin::Admin(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}
Admin::~Admin(){}

void Admin::setUser(string user) {
    this->user = user;
}
void Admin::setSenha(string senha) {
    this->senha = senha;
}

string Admin::getUser() const {
    return user;
}
string Admin::getSenha() const {
    return senha;
}