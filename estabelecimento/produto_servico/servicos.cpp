#include "servicos.hpp"

Servicos::Servicos() {}
Servicos::Servicos(string nome, string tempo, double preco, int qtd):nome(nome), tempo(tempo), preco(preco), qtd(qtd) {}
Servicos::~Servicos() {}

void Servicos::setNome(string nome) {
    this->nome = nome;
}
void Servicos::setPreco(double preco) {
    this->preco = preco;
}
void Servicos::setTempo(string tempo) {
    this->tempo = tempo;
}
void Servicos::setQuantidade(int qtd) {
    this->qtd = qtd;
}
string Servicos::getNome() const {
    return nome;
}
double Servicos::getPreco() const {
    return preco;
}
string Servicos::getTempo() const {
    return tempo;
}
int Servicos::getQuantidade() const {
    return qtd;
}

void Servicos::gerarOrdem(vector<Servicos> vector, int posi, int qtd){
    switch (posi) {
        case 0:
            vector[0].setQuantidade(qtd);
            break;
        case 1:
            vector[1].setQuantidade(qtd);
            break;
        case 2:
            vector[3].setQuantidade(qtd);
            break;
    }
}