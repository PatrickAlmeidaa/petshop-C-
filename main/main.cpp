#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"
#include <string>

using namespace std;

int main() {
    //variaveis auxiliares ao funcionamento do codigo
    string login, senha, nome, cpf, telefone, cargo;
    string dataV, dataP;
    string aux;
    int aux2;
    int z = 0;
    double valorEmVendas = 0;
    double valorEmServicos = 0;
    double valorEmCompras = 0;
    int qtdVendas = 0;
    int qtdServicos  = 0;
    double salario;
    int quantidade;
    int stop = 0;
    int stopUsers = 0;
    int stopRemove = 0;
    int user;
    vector<string> tratamento;
    string obs;

    //classe responsavel pelo layout
    Layout layout = Layout();

    //declarando todos os vetores usados no sistema (dados mokados);
    vector<Vendedor> vendedores;
    int sizeVendedores = 0;
    Vendedor vendedor = Vendedor("Joao da Mata", "15578922230", "(23)40891-7331", "vendedor", 1200.10, "vend1", "5533");
    vendedores.push_back(vendedor);
    vendedor = Vendedor("Bryan O'Conner", "84221454059", "(10)55022-2023", "vendedor", 1250.10, "vend2", "1973");
    vendedores.push_back(vendedor);
    sizeVendedores = 2;

    vector<Veterinario> veterinarios;
    int sizeVeterinario = 0;
    Veterinario veterinario = Veterinario("Hinata Hyuga", "75807674065", "(72)79764-9945", "veterinario", 3250.0, "vet1", "1113");
    veterinarios.push_back(veterinario);
    veterinario = Veterinario("Paolo Guerrero", "43325489060", "(26)76518-5348", "veterinario", 3230.0, "vet2", "1984");
    veterinarios.push_back(veterinario);
    sizeVeterinario = 2;

    vector<Tosador> tosadores;
    int sizeTosadores = 0;
    Tosador tosador = Tosador("Larissa Silva", "29619550099", "(20)75743-8099", "tosador", 1100.0);
    tosadores.push_back(tosador);
    tosador = Tosador("Carlos Eduardo", "06733613069", "(77)26843-9252", "tosador", 1100.0);
    tosadores.push_back(tosador);
    sizeTosadores = 2;

    vector<Cliente> clientes;
    int sizeClientes = 0;
    Cliente cliente = Cliente("Paulo Plinio", "37283338080", "(60)47950-4741", 10);
    clientes.push_back(cliente);
    cliente = Cliente("Paula Muller", "39521401044", "(82)26615-9145", 5);
    clientes.push_back(cliente);
    sizeClientes = 2;

    vector<Compras> compras;
    int sizeCompras = 0;

    vector<Pagamentos> pagamentos;
    Pagamentos pagar = Pagamentos(" ", " ", " ");
    int sizePagamentos = 0;

    vector<Produtos> produtos;
    int sizeProdutos = 0;
    Produtos produtos1 = Produtos("Coleira", 35, 23.45);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Sabonete", 42, 10.50);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Mordedor", 15, 8.35);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Racao", 150, 98.10);
    produtos.push_back(produtos1);
    sizeProdutos = 4;

    vector<Servicos> servicos;
    int sizeServicos = 0;
    Servicos servicos1 = Servicos("Banho", "25 Min", 85.30, 0);
    servicos.push_back(servicos1);
    servicos1 = Servicos("Tosa", "12 Min", 58.15, 0);
    servicos.push_back(servicos1);
    servicos1 = Servicos("Consulta", "tempo variado", 158.58, 0);
    servicos.push_back(servicos1);
    sizeServicos = 3;

    //declarando o responsavel pela manipulação dos arquivos e sua chamada para encher os vetores com os dados
    Arquivos arquivos = Arquivos();
    int y;
    do {
        user = layout.layoutPrincipal();
        layout.layoutLoguin(user, &login, &senha);
        switch (user) {

            // administrador
            case 1:
                //validação do loguin
                if (arquivos.validaLoginAdm( &login, &senha) == 1) {
                    stopUsers = 0;
                    while (stopUsers != -1) {

                        switch (layout.layoutAdmin()) {

                            //cadastro de vendedor
                            case 1:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Vendedor " << endl;
                                cout << "               login:";
                                fflush(stdin);
                                getline(cin, login);
                                cout << "               senha:";
                                fflush(stdin);
                                getline(cin, senha);
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
                                cin >> salario;
                                vendedor.setNome(nome);
                                vendedor.setCPF(cpf);
                                vendedor.setTel(telefone);
                                vendedor.setCargo("vendedor");
                                vendedor.setSalario(salario);
                                vendedor.setUser(login);
                                vendedor.setSenha(senha);
                                vendedores.push_back(vendedor);
                                sizeVendedores++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;

                            //cadastro de veterinario
                            case 2:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Veterinario " << endl;
                                cout << "               login:";
                                fflush(stdin);
                                getline(cin, login);
                                cout << "               senha:";
                                fflush(stdin);
                                getline(cin, senha);
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
                                cin >> salario;
                                veterinario.setNome(nome);
                                veterinario.setCPF(cpf);
                                veterinario.setTel(telefone);
                                veterinario.setCargo("veterinario");
                                veterinario.setSalario(salario);
                                veterinario.setUser(login);
                                veterinario.setSenha(senha);
                                veterinarios.push_back(veterinario);
                                sizeVeterinario++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;

                                //cadastro de tosador
                            case 3:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Tosador " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
                                cin >> salario;
                                tosador.setNome(nome);
                                tosador.setCPF(cpf);
                                tosador.setTel(telefone);
                                tosador.setCargo("tosador");
                                tosador.setSalario(salario);
                                tosadores.push_back(tosador);
                                sizeTosadores++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;

                                //impressao de funcionarios simples
                            case 4:
                                system("cls");
                                vendedor.imprimeVendedoresSimples(vendedores);
                                veterinario.imprimeVeterinarioSimples(veterinarios);
                                tosador.imprimeTosadorSimples(tosadores);
                                system("pause");
                                break;

                                //impressao de funcionarios completo
                            case 5:
                                system("cls");
                                vendedor.imprimeVendedoresCompleto(vendedores);
                                veterinario.imprimeVeterinarioCompleto(veterinarios);
                                tosador.imprimeTosadorCompleto(tosadores);
                                system("pause");
                                break;

                                //impressao cliente simples.
                            case 6:
                                system("cls");
                                cliente.imprimeClientesSimples(clientes);
                                system("pause");
                                break;

                                //impressao cliente completo.
                            case 7:
                                system("cls");
                                cliente.imprimeClientesCompleto(clientes);
                                system("pause");
                                break;

                                //cadastro de produtos
                            case 8:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Produto " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               preco:";
                                cin >> salario;
                                cout << "               quantidade:";
                                cin >> quantidade;
                                valorEmCompras += salario * quantidade;
                                produtos1.setNome(nome);
                                produtos1.setPreco(salario);
                                produtos1.setQuantidade(quantidade);
                                produtos.push_back(produtos1);
                                sizeProdutos++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;

                                //cadastro de servicos
                            case 9:
                                switch (layout.layoutVender()) {

                                    //venda de produtos
                                    case 1:
                                        cout << "               Nome:";
                                        fflush(stdin);
                                        getline(cin, nome);
                                        cout << "               Quantidade:";
                                        cin >> quantidade;
                                        for (int i = 0; i < produtos.size(); ++i) {
                                            if (produtos[i].getNome() == nome){
                                                salario = produtos[i].getPreco() * quantidade;
                                                valorEmVendas += salario;
                                                break;
                                            }
                                        }
                                        cout << "               Preco final:" << salario << endl;
                                        qtdVendas++;
                                        produtos1.tiraDoEstoque(produtos, nome, quantidade);
                                        system("pause");
                                        break;

                                        //venda de banho
                                    case 2:
                                        cout << "               Quantidade de animais para o banho:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[0].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[0].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 0, quantidade);
                                        system("pause");
                                        break;

                                        //venda de tosa
                                    case 3:
                                        cout << "               Quantidade de animais para tosa:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[1].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[1].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 1, quantidade);
                                        system("pause");
                                        break;

                                        //venda de consulta
                                    case 4:
                                        cout << "               Quantidade de animais para consulta:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[2].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[2].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 2, quantidade);
                                        system("pause");
                                        break;
                                }
                                break;

                            //impressão de stock e serviços disponiveis
                            case 10:
                                cout << "               Produtos disponiveis:" << endl;
                                for (int i = 0; i < produtos.size(); ++i) {
                                    cout << "Nome: "<< produtos[i].getNome() << "   Quantidade:"<< produtos[i].getQuantidade()<< endl;
                                }
                                cout << "               Servicos disponiveis:" << endl;
                                for (int i = 0; i < produtos.size() - 1; ++i) {
                                    cout << "Nome: "<< servicos[i].getNome() << endl;
                                }
                                system("pause");
                                break;

                                //Pagar conta
                            case 11:
                                system("cls");
                                cout << endl << endl << "           Pagar Contas " << endl;
                                cout << "               Descricao da conta (tipo da conta):";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               Data de Vencimento:";
                                fflush(stdin);
                                getline(cin, dataV);
                                cout << "               Data de Pagamento:";
                                fflush(stdin);
                                getline(cin, dataP);
                                pagar.setPagamento(dataP);
                                pagar.setVencimento(dataV);
                                pagar.SetDescricao(nome);
                                pagamentos.push_back(pagar);
                                sizePagamentos++;
                                break;

                                //Compras
                            case 12:
                                cout << "               Adicionar produtos/utilitarios no estoque" << endl;
                                cout << "               Produto:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               Quantidade:";
                                cin >> quantidade;
                                produtos1.addNoEstoque(produtos, nome, quantidade);
                                break;

                                //Gerar Relatorios
                            case 13:
                                cout << "               Relatorio do dia" << endl;
                                cout << "               Quantidade de produtos vendidos: " << qtdVendas << endl;
                                cout << "               Valor total de produtos vendidos: R$ " << valorEmVendas << endl;
                                cout << "               Quantidade de servicos vendidos: " << qtdServicos << endl;
                                cout << "               Valor total de servicos vendidos R$ :" << valorEmServicos << endl;
                                cout << "               Produtos comprados para compor o estoque da loja" << endl;
                                for (int i = 4; i < produtos.size(); ++i) {
                                    cout << "               Nome: "<< produtos[i].getNome() << "   Quantidade:"<< produtos[i].getQuantidade()<< endl;
                                }
                                cout << "               Valor total em produtos comprados para compor o estoque da loja: R$ " << valorEmCompras << endl;
                                cout << "               Lucro do dia: R$ " <<  valorEmCompras - (valorEmServicos + valorEmVendas) << endl;
                                system("pause");
                                break;

                            case 14:
                                //verificação para com que o usuario digite algo valido, enquanto o mesmo não for
                                //obedecido o while não parara de ser executado
                                while (stopRemove != -1){
                                    switch (layout.layoutRemoverFucionario()){

                                        //removendo vendedor
                                        case 1:
                                            cout << endl << endl << "           Nome do vendedor " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            vendedor.removeVendedor(nome, vendedores);
                                            system("cls");
                                            break;

                                            //removendo veterinario
                                        case 2:
                                            cout << endl << endl << "           Nome do veterinario " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            veterinario.removeVeterinario(nome, veterinarios);
                                            system("cls");
                                            break;

                                            //removendo tosador
                                        case 3:
                                            cout << endl << endl << "           Nome do Tosador " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            tosador.removeTosador(nome, tosadores);
                                            system("cls");
                                            break;
                                        case -1:
                                            stopRemove = -1;
                                            break;

                                        default:
                                            cout<< "erro, invalid code" << endl;
                                            break;
                                    }
                                }
                                break;

                                // cadastro de clientes
                            case 15:

                                system("cls");
                                cout << endl << endl << "           Cadastro de Cliente " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               Quantidade de compras:";
                                cin >> quantidade;
                                cliente.setNome(nome);
                                cliente.setCPF(cpf);
                                cliente.setTel(telefone);
                                cliente.setQtdCompras(quantidade);
                                clientes.push_back(cliente);
                                sizeClientes++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;
                            case -1:
                                stopUsers = -1;
                                break;
                            default:
                                system("cls");
                                cout << "invalid code" << endl;
                                break;
                        }
                    }

                } else {
                    system("cls");
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
                }
                break;
                //
            case 2:
                //vendedor
                if (arquivos.validaLoginVen( &login, &senha, vendedores) == 1) {
                    stopUsers = 0;
                    while (stopUsers != -1){
                        switch (layout.layoutVendedor()){

                            //cadastro de cliente
                            case 1:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Cliente " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               Quantidade de compras:";
                                cin >> quantidade;
                                cliente.setNome(nome);
                                cliente.setCPF(cpf);
                                cliente.setTel(telefone);
                                cliente.setQtdCompras(quantidade);
                                clientes.push_back(cliente);
                                sizeClientes++;
                                break;
                            case 2:
                                //vender algum produto ou serviço
                                switch (layout.layoutVender()) {
                                    case 1:
                                        cout << "               Nome:";
                                        fflush(stdin);
                                        getline(cin, nome);
                                        cout << "               Quantidade:";
                                        cin >> quantidade;
                                        for (int i = 0; i < produtos.size(); ++i) {
                                            if (produtos[i].getNome() == nome){
                                                salario = produtos[i].getPreco() * quantidade;
                                                valorEmVendas += salario;
                                                break;
                                            }
                                        }
                                        cout << "               Preco final:" << salario << endl;
                                        qtdVendas++;
                                        produtos1.tiraDoEstoque(produtos, nome, quantidade);
                                        system("pause");
                                        break;
                                    case 2:
                                        cout << "               Quantidade de animais para o banho:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[0].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[0].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 0, quantidade);
                                        system("pause");
                                        break;
                                    case 3:
                                        cout << "               Quantidade de animais para tosa:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[1].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[1].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 1, quantidade);
                                        system("pause");
                                        break;
                                    case 4:
                                        cout << "               Quantidade de animais para consulta:";
                                        cin >> quantidade;
                                        cout << "               Preco final:" << servicos[2].getPreco() * quantidade << endl;
                                        valorEmServicos += servicos[2].getPreco() * quantidade;
                                        qtdServicos++;
                                        servicos1.gerarOrdem(servicos, 2, quantidade);
                                        system("pause");
                                        break;
                                }
                                break;
                            case -1:
                                stopUsers = -1;
                                break;
                        }
                    }
                } else {
                    system("cls");
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
                }
                break;
            case 3:
                //veterinario
                if (arquivos.validaLoginVet(&login, &senha, veterinarios)) {
                    stopUsers = 0;
                    while (stopUsers != -1){
                        switch (layout.layoutVeterinario()) {

                            //cadastro de cliente
                            case 1:
                                cout << endl << endl << "           Cadastro de Cliente " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cliente.mostraCliente(clientes, nome);
                                system("pause");
                                break;

                                //gerar ordem de servico
                            case 2:
                                cout << endl << endl << "           Ordems de servico " << endl;
                                cout << "               Quatidade de animais para atendimento: " << servicos[2].getQuantidade() << endl;
                                system("pause");
                                break;

                                //registrar informacões do tratamneto
                            case 3:
                                cout << endl << endl << "           Registrar informacoes do tratamento " << endl;
                                cout << "               Descricao: ";
                                fflush(stdin);
                                getline(cin, obs);
                                tratamento.push_back(obs);
                                break;
                            case -1:
                                stopUsers = -1;
                                break;
                        }
                    }
                } else {
                    system("cls");
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
                }
                break;
            case 4:
                stop = -1;
                break;
            default:
                system("cls");
                cout << "erro invalid code" << endl;
                break;
        }
    } while (stop != -1);
    return 0;
}

