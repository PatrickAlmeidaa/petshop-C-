#ifndef UNTITLED1_TOSADOR_HPP
#define UNTITLED1_TOSADOR_HPP

#include "../funcionarios.hpp"
#include <vector>
using namespace std;

class Tosador : public Funcionarios {
public:
    ~Tosador();
    Tosador();
    Tosador(string ="",string ="", string ="" ,string ="", double  = 0.0);

    void imprimeTosadorSimples(vector<Tosador> &tosadores);
    void imprimeTosadorCompleto(vector<Tosador> &vector);

    void removeTosador(string nome, vector<Tosador> &vector);
};

#endif //UNTITLED1_TOSADOR_HPP
