#include "produtos.hpp"

Produtos::Produtos() {}

Produtos::Produtos(string nome, int quantidade, double preco) : nome(nome), quantidade(quantidade), preco(preco) {}

Produtos::~Produtos() {}
void Produtos::setNome(string nome) {
    this->nome = nome;
}

void Produtos::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

void Produtos::setPreco(double preco) {
    this->preco = preco;
}
string Produtos::getNome() const {
    return nome;
}
int Produtos::getQuantidade() const {
    return quantidade;
}

double Produtos::getPreco() const {
    return preco;
}
void Produtos::addNoEstoque(vector<Produtos> &vector, string nome, int qtd){
    int aux;
    for (int i = 0; i < vector.size(); ++i) {
        if(vector[i].getNome() == nome){
            aux = vector[i].getQuantidade();
            vector[i].setQuantidade(aux + qtd);
            break;
        }
    }
}
void Produtos::tiraDoEstoque(vector<Produtos> &vector, string nome, int qtd) {
    int aux;
    for (int i = 0; i < vector.size(); ++i) {
        if(vector[i].getNome() == nome){
            aux = vector[i].getQuantidade();
            if (aux < qtd) {
                cout << "A quantidade desejada excede o estabelecimento\n";
                cout << "quantidade em estabelecimento: \n" << aux;
            } else setQuantidade(aux - qtd);
            break;
        }
    }
}