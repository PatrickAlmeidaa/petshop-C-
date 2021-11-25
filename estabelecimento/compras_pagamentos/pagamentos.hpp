#ifndef PAGAMENTOS_HPP
#define PAGAMENTOS_HPP

#include <iostream>
#include <string>

using namespace std;
//---
class Pagamentos{
    private:
        string dataPagamento;
        string dataVencimento;
        string desc;
    public:
        ~Pagamentos();
        Pagamentos();
        Pagamentos(string = "", string = "", string = "");
        void setPagamento(string dataPagamento);
        void setVencimento(string dataVencimento);
        void SetDescricao(string desc);

        string getPagamento() const;
        string getVencimento() const;
        string getDescricao() const;
};
#endif