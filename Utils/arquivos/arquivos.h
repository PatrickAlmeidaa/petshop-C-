#ifndef UNTITLED1_ARQUIVOS_H
#define UNTITLED1_ARQUIVOS_H
#include <iostream>
#include <string>
#include <vector>
#include "windows.h"
#include "../../pessoas/funcionarios/vendedor/vendedor.hpp"
#include "../../pessoas/funcionarios/veterinario/veterinario.hpp"
#include "../../pessoas/funcionarios/tosador/tosador.hpp"
#include "../../pessoas/clientes/cliente.hpp"
#include "../../estabelecimento/compras_pagamentos/compras.hpp"
#include "../../estabelecimento/compras_pagamentos/pagamentos.hpp"
#include "../../estabelecimento/produto_servico/servicos.hpp"

using namespace std;

class Arquivos{
private:

public:
    Arquivos();
    ~Arquivos();
    int validaLoginAdm(string *login, string *senha);
    int validaLoginVen(string *login, string *senha,vector<Vendedor> &vendedor );
    int validaLoginVet(string *login, string *senha,vector<Veterinario> &veterinario);
    int buscaNoBanco(int user, string *login, string *senha);
    void inicializaArquivo();
    void lerArquivoVendedor(int tamanho,vector<Vendedor> &vendedor);
    void escreverArquivoVendedor(int tamanho, vector<Vendedor> &vendedores);
    void escreverArquivoVeterinario(int tamanho, vector<Veterinario> &veterinario);
    void lerArquivoVeterinario(int tamanho, vector<Veterinario> &veterinario);
    void escreverArquivoTosador(int tamanho, vector<Tosador> &tosador);
    void lerArquivoTosador(int tamanho, vector<Tosador> &tosador);
    void escreverArquivoCliente(int tamanho, vector<Cliente> &cliente);
    void lerArquivoCliente(int tamanho, vector<Cliente> &cliente);
    void escreverArquivoCompras(int tamanho, vector<Compras> &compras);
    void lerArquivoCompras(int tamanho, vector<Compras> &compras);
    void escreverArquivoPagamentos(int tamanho, vector<Pagamentos> &pagamentos);
    void lerArquivoPagamentos(int tamanho, vector<Pagamentos> &pagamentos);
    void escreverArquivoProdutos(int tamanho, vector<Produtos> &produtos);
    void lerArquivoProdutos(int tamanho, vector<Produtos> &produtos);
    void escreverArquivoServico(int tamanho, vector<Servicos> &servico);
    void lerArquivoServico(int tamanho, vector<Servicos> &servico);
};
#endif //UNTITLED1_ARQUIVOS_H
