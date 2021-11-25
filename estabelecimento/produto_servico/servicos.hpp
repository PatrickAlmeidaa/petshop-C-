#ifndef SERVICOS_HPP
#define SERVICOS_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Servicos{
    private:
        string nome;
        string tempo;
        double preco;
        int qtd;
    public:
        Servicos();
        Servicos(string = "", string = "", double = 0.0, int = 0);
        ~Servicos();
        void setNome(string nome);
        void setTempo(string tempo);
        void setPreco(double preco);
        void setQuantidade(int qtd);

        string getNome() const;
        string getTempo() const;
        double getPreco() const;
        int getQuantidade() const;

        void gerarOrdem(vector<Servicos> vector, int posi, int qtd);
};
#endif