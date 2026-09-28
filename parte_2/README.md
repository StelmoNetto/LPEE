# Parte 2 - Estruturas de Dados e funções

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

## Ponteiro e Alocação Dinâmica
Códigos-fonte demonstrando conceitos fundamentais de ponteiros, operadores de endereço e indireção, aritmética de ponteiros, acesso a vetores e matrizes via ponteiros e qualificadores de proteção com `const`.

### Ponteiro
Códigos-fonte focados no estudo prático de ponteiros e manipulação de memória em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operadores_ponteiro.c](ponteiro/operadores_ponteiro.c)|Declaração de ponteiro e uso dos operadores de endereço (`&`) e de indireção (`*`).|
|2|[enderecos_ponteiro.c](ponteiro/enderecos_ponteiro.c)|Diferença entre o endereço da variável, o endereço próprio do ponteiro e o valor apontado.|
|3|[alteracao_indireta.c](ponteiro/alteracao_indireta.c)|Alteração indireta do valor de variáveis na memória através de desreferenciação de ponteiro.|
|4|[atribuicao_de_ponteiros.c](ponteiro/atribuicao_de_ponteiros.c)|Atribuição entre ponteiros do mesmo tipo para apontarem para o mesmo endereço de memória.|
|5|[ponteiro_null_e_void.c](ponteiro/ponteiro_null_e_void.c)|Uso de ponteiro genérico (`void*`) para conversão de endereços e inicialização com `NULL`.|
|6|[soma_subtraca_incremento_decremento_ponteiro.c](ponteiro/soma_subtraca_incremento_decremento_ponteiro.c)|Aritmética de ponteiros com operações de soma, subtração, pré-incremento e pré-decremento.|
|7|[comparacao_ponteiros.c](ponteiro/comparacao_ponteiros.c)|Comparação relacional entre ponteiros e testes de verificação de ponteiro nulo (`NULL`).|
|8|[acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c](ponteiro/acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c)|Acesso e percorrimento de vetor através do pós-incremento de ponteiro em laço.|
|9|[acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c](ponteiro/acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c)|Acesso linear aos elementos de uma matriz bidimensional por deslocamento aritmético de ponteiro.|
|10|[vetor_de_ponteiros.c](ponteiro/vetor_de_ponteiros.c)|Criação e inicialização de um vetor de ponteiros armazenando endereços de memória.|
|11|[formacao_de_matriz_com_vetor_de_ponteiros.c](ponteiro/formacao_de_matriz_com_vetor_de_ponteiros.c)|Construção de matriz bidimensional a partir de um vetor de ponteiros para vetores.|
|12|[prevenir_de_alteracao_de_vetor.c](ponteiro/prevenir_de_alteracao_de_vetor.c)|Proteção contra alteração dos elementos de vetor usando ponteiro para constante (`const int *`).|
|13|[prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c](ponteiro/prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c)|Fixação de endereço com ponteiro constante (`int * const`) permitindo modificar os elementos.|
|14|[prevenir_de_alteracao_de_ponteiro_e_elementos.c](ponteiro/prevenir_de_alteracao_de_ponteiro_e_elementos.c)|Proteção total contra alteração de ponteiro e elementos com `const int * const`.|
|15|[ponteiro_duplo.c](ponteiro/ponteiro_duplo.c)|Declaração e uso de ponteiro para ponteiro (ponteiro duplo) com dupla desreferenciação.|
|16|[indirecao_de_nivel_3.c](ponteiro/indirecao_de_nivel_3.c)|Demonstração de múltiplos níveis de indireção com ponteiro triplo (nível 3) encadeando endereços.|
|17|[atribuicao_de_ponteiros_de_tipos_diferentes.c](ponteiro/atribuicao_de_ponteiros_de_tipos_diferentes.c)|Conversão explícita de ponteiro (casting) entre tipos incompatíveis para acesso a bytes.|
|18|[adicao_de_ponteiro_char_de_ponteiro_int.c](ponteiro/adicao_de_ponteiro_char_de_ponteiro_int.c)|Acesso a bytes de variável inteira através de deslocamento com ponteiro para caractere.|
|19|[incremento_de_ponteiro_char_de_ponteiro_int.c](ponteiro/incremento_de_ponteiro_char_de_ponteiro_int.c)|Navegação byte a byte em variável inteira utilizando pré-incremento de ponteiro para caractere.|
|20|[acesso_rapido_de_elemento_de_vetor_por_soma_de_ponteiro.c](ponteiro/acesso_rapido_de_elemento_de_vetor_por_soma_de_ponteiro.c)|Acesso a elementos de vetor por deslocamento aritmético a partir do endereço base.|

### Alocação Dinâmica
Códigos-fonte demonstrando conceitos fundamentais de alocação dinâmica de memória em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[malloc_basico.c](alocacao_dinamica/malloc_basico.c)|Alocação básica de bloco de memória na heap com `malloc` e liberação com `free`.|
|2|[alocacao_de_tipos_primitivos.c](alocacao_dinamica/alocacao_de_tipos_primitivos.c)|Alocação dinâmica para tipos primitivos com `sizeof`, teste de `NULL` e liberação com `free`.|
|3|[alocacao_de_vetor_de_tipo_simples.c](alocacao_dinamica/alocacao_de_vetor_de_tipo_simples.c)|Alocação dinâmica de vetor unidimensional com `malloc`, tratamento de erro e liberação.|
|4|[alocacao_de_vetor_e_errno_perror.c](alocacao_dinamica/alocacao_de_vetor_e_errno_perror.c)|Tratamento e exibição de falha de alocação de memória com `errno`, `ENOMEM`, `strerror` e `perror`.|
|5|[aloca_matriz2D.c](alocacao_dinamica/aloca_matriz2D.c)|Alocação dinâmica de matriz bidimensional via vetor de ponteiros com tratamento de falhas e desalocação.|
|6|[aloca_matriz2D_de_coluna_fixa.c](alocacao_dinamica/aloca_matriz2D_de_coluna_fixa.c)|Alocação dinâmica de matriz bidimensional contígua usando ponteiro para vetor de colunas fixas.|
|7|[alocacao_com_calloc.c](alocacao_dinamica/alocacao_com_calloc.c)|Alocação dinâmica de memória com inicialização automática em zero utilizando a função `calloc`.|
|8|[realocacao_de_vetor_com_realloc.c](alocacao_dinamica/realocacao_de_vetor_com_realloc.c)|Redimensionamento dinâmico de vetor com `realloc` em operações de expansão e compressão.|
|9|[alocacao_moderna_de_matriz3D.c](alocacao_dinamica/alocacao_moderna_de_matriz3D.c)|Alocação moderna de matriz 3D em bloco contíguo único e liberação com um único `free`.|
|10|[alocacao_tradicional_de_matriz3D.c](alocacao_dinamica/alocacao_tradicional_de_matriz3D.c)|Alocação tradicional de matriz 3D em camadas com ponteiro triplo e desalocação hierárquica.|