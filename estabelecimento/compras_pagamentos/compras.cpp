#include "compras.hpp"

void Compras::setQtdParaAdd(int qtdParaAdd){
    this->qtdParaAdd = qtdParaAdd;
}
int Compras::getQtdParaAdd() const{
    return qtdParaAdd;
}
void Compras::addNoEstoque(int qtdParaAdd, int quantidade){
    setQuantidade(quantidade + qtdParaAdd);
}