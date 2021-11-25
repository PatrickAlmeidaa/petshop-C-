#ifndef UNTITLED1_VETERINARIO_HPP
#define UNTITLED1_VETERINARIO_HPP

#include <iostream>
#include <string>
#include "../funcionarios.hpp"
#include <vector>

using namespace std;

class Veterinario : public Funcionarios {
    public:
        string user;
        string senha;
    public:
        Veterinario();
        Veterinario(string ="",string ="", string ="" ,string ="", double  = 0.0,string ="", string ="");
        ~Veterinario();
        void setUser(string user);

        void setSenha(string senha);

        string getUser() const;

        string getSenha() const;
        void imprimeVeterinarioSimples(vector<Veterinario> &vector);
        void imprimeVeterinarioCompleto(vector<Veterinario> &vector);

        void removeVeterinario(string nome, vector<Veterinario> &vector);
};
#endif //UNTITLED1_VETERINARIO_HPP
