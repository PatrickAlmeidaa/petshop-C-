#include "pessoa.hpp"

Pessoa::Pessoa(){}

Pessoa::Pessoa(string nome, string CPF, string tel): nome(nome), CPF(CPF), tel(tel) {}

Pessoa::~Pessoa() {}


void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setCPF(string CPF) {
    this->CPF = CPF;
}

void Pessoa::setTel(string tel) {
    int x =0;
    this->tel = tel;
}


string Pessoa::getNome() const {
    return nome;
}

string Pessoa::getCPF() const {
    return CPF;
}

string Pessoa::getTel() const {
    return tel;
}
