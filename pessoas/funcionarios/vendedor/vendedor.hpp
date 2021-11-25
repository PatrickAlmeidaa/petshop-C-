#ifndef UNTITLED1_VENDEDOR_HPP
#define UNTITLED1_VENDEDOR_HPP

#include <iostream>
#include <string>
#include "../funcionarios.hpp"
#include <vector>
using namespace std;

class Vendedor : public Funcionarios {
    private:
        string user;
        string senha;
    public:
        ~Vendedor();
        Vendedor(string ="",string ="", string ="" ,string ="", double  = 0.0,string ="", string ="");

        void setUser(string user);

        void setSenha(string senha);

        string getUser() const;

        string getSenha() const;
        void imprimeVendedoresSimples(vector<Vendedor> &vector);
        void imprimeVendedoresCompleto(vector<Vendedor> &vector);

        void removeVendedor(string nome, vector<Vendedor> &vector);
};




#endif //UNTITLED1_VENDEDOR_HPP
