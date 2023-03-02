# Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas

## :clipboard: Introdução

Sistema simples para a gerência de funcionários e produtos em pequenos estabelecimentos, desenvolvido para a disciplina de Análise E Projeto De Sistemas da UTFPR no segundo semestre de 2019. O software foi desenvolvido em C++ utilizando a IDE Qt Creator. Para realizar a persistência de dados, foi utilizado o banco de dados SQLite.

## :bar_chart: Funcionamento

O sistema permite realizar a gerência de produtos e de funcionários. Existem dois tipos possíveis de usuários: Funcionário e Gerente. Assim tanto os gerentes quanto os funcionários podem gerenciar produto, no entanto, somente um gerente pode gerenciar os dados dos funcionários.

Ao acessar o sistema, o usuário deve inserir o nome e a senha:

![login](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/login.png) 

Ao acessar o sistema, o usuário tem acesso a tela inicial:

![tela inicial](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/tela_inicial.png)

### Gerenciando produtos

#### Adicionando produtos

![adicionando](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/adicionando_produto.png)

#### Excluindo produtos

![excluindo](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/excluindo_produto.png)

#### Procurando produtos

![procurando](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/procurando_produto.png)

#### Listando produtos

![listando](https://github.com/laskoskjoao/Sistema-gerenciador-de-produtos-e-funcionarios-de-microempresas/blob/main/imagens/listando_produto.png)

Para o entendimento completo do sistema, recomenda-se a leitura do documento "Projeto de gerenciamento de estoque e funcionários para um mercado.pdf" anexado ao repositório, que contém todo o planejamento do sistema, como levantamento de requisitos, o estudo de viabilidade e a modelagem do sistema (diagramas UML).

### Gerenciando funcionários

O gerenciamento de funcionários é análogo ao de produtos. No entanto, como dito anteriormente, somente um gerente possui poder para gerenciar funcionários.

## :question: Como testar

Para testar o programa, basta baixar este repositório e acessar build-SistemaMercado-Desktop_Qt_5_12_6_MinGW_32_bit-Release/release/SistemaMercado. Para acessar o sistema, é possível utilizar o usuário ADM e a senha 123.
