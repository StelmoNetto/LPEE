# Parte 2 - Vetores e Matrizes Multidimensionais

Este diretório contém os códigos-fonte da **Parte 2** da disciplina de Linguagem de Programação, abrangendo conceitos de vetores unidimensionais, matrizes bidimensionais e tridimensionais com diversas abordagens de inicialização; ponteiros e sua aritmética, alocação dinâmica e matrizes de ponteiros.

## Vetores e Matrizes Multidimensionais
Códigos-fonte demonstrando declaração, preenchimento, técnicas de inicialização (em lista linear, com chaves aninhadas e inicialização designada) para arranjos unidimensionais e multidimensionais e indexação em C.

### Vetor e matriz multidimensional
Códigos-fonte focados no estudo prático de vetores e matrizes multidimensionais.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[media_das_n_notas_com_vetor_e_define.c](vetor_e_matriz_multidimensional/media_das_n_notas_com_vetor_e_define.c)|Cálculo da média de notas em vetor com dimensão definida via diretiva `#define` e entrada pelo teclado.|
|2|[media_das_n_notas_com_vetor_e_enum.c](vetor_e_matriz_multidimensional/media_das_n_notas_com_vetor_e_enum.c)|Cálculo da média de notas com vetor inicializado e dimensão definida por constante enumerada (`enum`).|
|3|[media_das_n_notas_com_vetor_e_const.c](vetor_e_matriz_multidimensional/media_das_n_notas_com_vetor_e_const.c)|Cálculo da média de notas com contagem de elementos do vetor obtida via `sizeof` e constante `const`.|
|4|[inicializacao_designada_e_com_bloco_de_matriz.c](vetor_e_matriz_multidimensional/inicializacao_designada_e_com_bloco_de_matriz.c)|Inicialização de matriz bidimensional por designadores de posição e combinação de designador com bloco.|
|5|[inicializacao_com_chaves_de_matriz3D.c](vetor_e_matriz_multidimensional/inicializacao_com_chaves_de_matriz3D.c)|Declaração e inicialização completa de matriz tridimensional (3D) utilizando chaves aninhadas.|
|6|[inicializacao_em_lista_de_matriz3D.c](vetor_e_matriz_multidimensional/inicializacao_em_lista_de_matriz3D.c)|Inicialização de matriz tridimensional (3D) em lista linear contínua e atribuição pontual de elemento.|
|7|[inicializacao_designada_de_matriz3D.c](vetor_e_matriz_multidimensional/inicializacao_designada_de_matriz3D.c)|Inicialização designada de posições específicas em matriz tridimensional (3D) via coordenadas explícitas.|
|8|[inicializacao_designada_com_bloco_de_matriz3D.c](vetor_e_matriz_multidimensional/inicializacao_designada_com_bloco_de_matriz3D.c)|Inicialização designada mista com blocos aninhados para preenchimento de linhas em matriz 3D.|

## Ponteiros e Alocação Dinâmica
Códigos-fonte demonstrando conceitos fundamentais de ponteiros, operadores de endereço e indireção, aritmética de ponteiros, acesso a vetores e matrizes via ponteiros e qualificadores de proteção com `const`.

### Ponteiro e alocação dinâmica
Códigos-fonte focados no estudo prático de ponteiros e manipulação de memória em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operadores_ponteiro.c](ponteiro_e_alocacao_dinamica/operadores_ponteiro.c)|Declaração de ponteiro e uso dos operadores de endereço (`&`) e de indireção (`*`).|
|2|[enderecos_ponteiro.c](ponteiro_e_alocacao_dinamica/enderecos_ponteiro.c)|Diferença entre o endereço da variável, o endereço próprio do ponteiro e o valor apontado.|
|3|[alteracao_indireta.c](ponteiro_e_alocacao_dinamica/alteracao_indireta.c)|Alteração indireta do valor de variáveis na memória através de desreferenciação de ponteiro.|
|4|[atribuicao_de_ponteiros.c](ponteiro_e_alocacao_dinamica/atribuicao_de_ponteiros.c)|Atribuição entre ponteiros do mesmo tipo para apontarem para o mesmo endereço de memória.|
|5|[ponteiro_null_e_void.c](ponteiro_e_alocacao_dinamica/ponteiro_null_e_void.c)|Uso de ponteiro genérico (`void*`) para conversão de endereços e inicialização com `NULL`.|
|6|[soma_subtraca_incremento_decremento_ponteiro.c](ponteiro_e_alocacao_dinamica/soma_subtraca_incremento_decremento_ponteiro.c)|Aritmética de ponteiros com operações de soma, subtração, pré-incremento e pré-decremento.|
|7|[comparacao_ponteiros.c](ponteiro_e_alocacao_dinamica/comparacao_ponteiros.c)|Comparação relacional entre ponteiros e testes de verificação de ponteiro nulo (`NULL`).|
|8|[acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c](ponteiro_e_alocacao_dinamica/acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c)|Acesso e percorrimento de vetor através do pós-incremento de ponteiro em laço.|
|9|[acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c](ponteiro_e_alocacao_dinamica/acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c)|Acesso linear aos elementos de uma matriz bidimensional por deslocamento aritmético de ponteiro.|
|10|[vetor_de_ponteiros.c](ponteiro_e_alocacao_dinamica/vetor_de_ponteiros.c)|Criação e inicialização de um vetor de ponteiros armazenando endereços de memória.|
|11|[formacao_de_matriz_com_vetor_de_ponteiros.c](ponteiro_e_alocacao_dinamica/formacao_de_matriz_com_vetor_de_ponteiros.c)|Construção de matriz bidimensional a partir de um vetor de ponteiros para vetores.|
|12|[prevenir_de_alteracao_de_vetor.c](ponteiro_e_alocacao_dinamica/prevenir_de_alteracao_de_vetor.c)|Proteção contra alteração dos elementos de vetor usando ponteiro para constante (`const int *`).|
|13|[prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c](ponteiro_e_alocacao_dinamica/prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c)|Fixação de endereço com ponteiro constante (`int * const`) permitindo modificar os elementos.|
|14|[prevenir_de_alteracao_de_ponteiro_e_elementos.c](ponteiro_e_alocacao_dinamica/prevenir_de_alteracao_de_ponteiro_e_elementos.c)|Proteção total contra alteração de ponteiro e elementos com `const int * const`.|
