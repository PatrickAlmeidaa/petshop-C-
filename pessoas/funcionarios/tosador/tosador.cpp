#include "tosador.hpp"
#include <vector>


Tosador::Tosador(string nome,string cpf, string tel, string cargo, double salario):Funcionarios(nome,cpf,tel,cargo,salario) {}
Tosador::~Tosador() {}

void Tosador::imprimeTosadorSimples(vector<Tosador> &vector){
    cout <<endl  << "           Tosadores" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF()<< endl;
    }
}
void Tosador::imprimeTosadorCompleto(vector<Tosador> &vector){
    cout <<endl  << "           Tosadores" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() <<"   tel:"<< vector[i].getTel()<<"   salario:"<< vector[i].getSalario()<< endl;
    }
}
void Tosador::removeTosador(string nome, vector<Tosador> &vector){
    int aux;
    for (int i = 0; i < vector.size(); i++) {
        if (vector[i].getNome() == nome){
            aux = i;
            break;
        }
    }
    Tosador aux2 = Tosador(vector[aux].getNome(), vector[aux].getCPF(), vector[aux].getTel(), vector[aux].getCargo(), vector[aux].getSalario());
    vector[aux] = Tosador(vector[vector.size() - 1].getNome(), vector[vector.size() - 1].getCPF(), vector[vector.size() - 1].getTel(), vector[vector.size() - 1].getCargo(), vector[vector.size() - 1].getSalario());
    vector[vector.size() - 1] = Tosador(aux2.getNome(), aux2.getCPF(), aux2.getTel(), aux2.getCargo(), aux2.getSalario());
    vector.pop_back();
}
