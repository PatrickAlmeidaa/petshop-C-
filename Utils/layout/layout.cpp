#include "layout.hpp"

Layout::Layout() {}

Layout::~Layout() {}

//responsavel por alterar as porporções do console, iremos utilizar um padrão;
void Layout::resizeConsole() {
    int width = 1024, height = 720;
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

int Layout::layoutPrincipal() {
    int x;
    cout << endl << "                           PetShop                     " << endl << endl;
    cout << "   Bem vindo. Escolha uma das opcoes" << endl << endl;
    cout << "           1 - Administrador. " << endl;
    cout << "           2 - Vendedor. " << endl;
    cout << "           3 - Veterinario. " << endl;
    cout << "           4 - Sair. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    //system("cls");
    return x;

}

void Layout::layoutLoguin(int user, string *login, string *senha) {
    system("cls");
    switch (user) {
        case 1:
            cout << "       Login Adiministrador:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        case 2:
            cout << "       Login Vendedor:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        case 3:
            cout << "       Login Veterinario:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        case 4:
            break;
        default:
            cout << "vc digitou algo errado ;" << endl;
            break;

    }

}

int Layout::layoutAdmin() {
    int x;
    system("cls");
    cout << endl << "                         Admin                    " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de Vendedor. " << endl;
    cout << "           2  - Cadastro de Veterinario. " << endl;
    cout << "           3  - Cadastro de Tosador. " << endl;
    cout << "           4  - Visualizar Funcionarios simples. " << endl;
    cout << "           5  - Visualizar Funcionarios completo. " << endl;
    cout << "           6  - Visualizar Clientes simples. " << endl;
    cout << "           7  - Visualizar Clientes completo. " << endl;
    cout << "           8  - Cadastro Produto. " << endl;
    cout << "           9  - Vender. " << endl;
    cout << "           10  - Ver Produtos e servicos. " << endl;
    cout << "           11  - Pagar Conta. " << endl;
    cout << "           12  - Compras. " << endl;
    cout << "           13 - Gerar Relatorios. " << endl;
    cout << "           14 - Remover Funcionario. " << endl;
    cout << "           15 - Cadastra Clientes. " << endl;
    cout << "           -1 - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}

int Layout::layoutVendedor() {
    //system("cls");
    int x;
    cout << endl << "                      Vendedor                   " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de cliente. " << endl;
    cout << "           2  - Realizar Venda. " << endl;
    cout << "           -1  - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}

int Layout::layoutVeterinario() {
    //system("cls");
    int x;
    cout << endl << "                      Veterinario                   " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de cliente. " << endl;
    cout << "           2  - Realizar Ordem e Servico. " << endl;
    cout << "           3  - Insformacoes de tratamento. " << endl;
    cout << "           -1  - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}
int Layout::layoutRemoverFucionario() {
        system("cls");
        int x;
        cout << "       Escolha uma das opcoes:" << endl << endl;
        cout << "           1  - Remover vendedor. " << endl;
        cout << "           2  - Remover veterinario. " << endl;
        cout << "           3  - Remover tosador. " << endl;
        cout << "           -1  - Voltar. " << endl << endl;
        cout << "   Opcao:";
        cin >> x;
        return x;
}
int Layout::layoutVender() {
    //system("cls");
    int x;
    cout << "       Vendas" << endl << endl;
    cout << "           1  - Produtos. " << endl;
    cout << "           2  - Banho. " << endl;
    cout << "           3  - Tosa. " << endl;
    cout << "           4  - Consulta. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}



