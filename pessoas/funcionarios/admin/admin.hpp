#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <iostream>
#include <string>
#include "../funcionarios.hpp"

using namespace std;

class Admin : public Funcionarios {
    public:
        string user;
        string senha;
    public:
        ~Admin();
        Admin();
        Admin(string ="",string ="", string ="" ,string ="", double  = 0.0,string ="admin", string ="admin");

        void setUser(string user);
        void setSenha(string senha);

        string getUser() const;
        string getSenha() const;
};
#endif