cmake_minimum_required(VERSION 3.19)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(
            main main/main.cpp

            estabelecimento/compras_pagamentos/compras.cpp
            estabelecimento/compras_pagamentos/compras.hpp
            estabelecimento/compras_pagamentos/pagamentos.cpp
            estabelecimento/compras_pagamentos/pagamentos.hpp

            estabelecimento/produto_servico/produtos.cpp
            estabelecimento/produto_servico/produtos.cpp
            estabelecimento/produto_servico/servicos.cpp
            estabelecimento/produto_servico/servicos.hpp

            pessoas/pessoa.cpp
            pessoas/pessoa.hpp

            pessoas/clientes/cliente.cpp
            pessoas/clientes/cliente.hpp

            pessoas/funcionarios/admin/admin.hpp

            pessoas/funcionarios/funcionarios.cpp
            pessoas/funcionarios/funcionarios.hpp


        pessoas/funcionarios/admin/admin.cpp pessoas/funcionarios/tosador/tosador.cpp pessoas/funcionarios/tosador/tosador.hpp pessoas/funcionarios/vendedor/vendedor.cpp pessoas/funcionarios/vendedor/vendedor.hpp pessoas/funcionarios/veterinario/veterinario.cpp pessoas/funcionarios/veterinario/veterinario.hpp Utils/layout/layout.cpp Utils/layout/layout.hpp Utils/arquivos/arquivos.cpp Utils/arquivos/arquivos.h)