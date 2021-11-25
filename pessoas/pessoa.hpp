#ifndef UNTITLED1_PESSOA_HPP
#define UNTITLED1_PESSOA_HPP

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    string nome;
    string CPF;
    string tel;

public:

    Pessoa();

    ~Pessoa();

    Pessoa(string nome, string CPF, string tel);

    void setNome(string nome);

    void setCPF(string CPF);

    void setTel(string tel);


    string getNome() const;

    string getCPF() const;

    string getTel() const;
};


#endif //UNTITLED1_PESSOA_HPP
