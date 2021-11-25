#include "funcionarios.hpp"

Funcionarios::Funcionarios(){}
Funcionarios::Funcionarios(string nome,string cpf, string tel, string cargo, double salario) : Pessoa(nome,cpf,tel), cargo(cargo), salario(salario){}
Funcionarios::~Funcionarios() {}

void Funcionarios::setCargo(string cargo){
    this->cargo = cargo;
}
void Funcionarios::setSalario(double salario){
    this->salario = salario;
}

string Funcionarios::getCargo() const{
    return cargo;
}
double Funcionarios::getSalario() const{
    return salario;
}
