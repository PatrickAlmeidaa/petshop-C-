#include "pagamentos.hpp"
//---
Pagamentos::~Pagamentos() {}
Pagamentos::Pagamentos(){}

Pagamentos::Pagamentos(string dataPagamento, string dataVencimento, string desc):dataPagamento(dataPagamento), dataVencimento(dataVencimento),desc(desc){}
void Pagamentos::setPagamento(string dataPagamento){
    this->dataPagamento = dataPagamento;
}
void Pagamentos::setVencimento(string dataVencimento) {
    this->dataPagamento = dataVencimento;
}
void Pagamentos::SetDescricao(string desc) {
    this->desc = desc;
}
string Pagamentos::getPagamento() const{
    return dataPagamento;
}
string Pagamentos::getVencimento() const{
    return dataVencimento;
}
string Pagamentos::getDescricao() const{
    return desc;
}