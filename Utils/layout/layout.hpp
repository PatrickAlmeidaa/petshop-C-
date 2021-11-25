#ifndef UNTITLED1_LAYOUT_HPP
#define UNTITLED1_LAYOUT_HPP

#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

class Layout{
    public:
    Layout();
    ~Layout();
    void resizeConsole();
    int layoutPrincipal();
    void layoutLoguin(int user,string *login, string *senha);
    int layoutAdmin();
    int layoutVendedor();
    int layoutVeterinario();
    int layoutRemoverFucionario();
    int layoutVender();
};
#endif //UNTITLED1_LAYOUT_HPP
