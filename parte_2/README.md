# Parte 2 - Estruturas de Dados e funções

Este diretório contém os códigos-fonte da **Parte 2** da disciplina de Linguagem de Programação, abrangendo conceitos de vetores unidimensionais, matrizes bidimensionais e tridimensionais com diversas abordagens de inicialização; ponteiros e sua aritmética, alocação dinâmica, sub-rotinas, ponteiros para funções e funções com parâmetros variáveis.

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
|6|[atribuicao_de_ponteiros_de_tipos_diferentes.c](ponteiro/atribuicao_de_ponteiros_de_tipos_diferentes.c)|Conversão explícita de ponteiro (casting) entre tipos incompatíveis para acesso a bytes.|
|7|[soma_subtraca_incremento_decremento_ponteiro.c](ponteiro/soma_subtraca_incremento_decremento_ponteiro.c)|Aritmética de ponteiros com operações de soma, subtração, pré-incremento e pré-decremento.|
|8|[incremento_de_ponteiro_char_de_ponteiro_int.c](ponteiro/incremento_de_ponteiro_char_de_ponteiro_int.c)|Navegação byte a byte em variável inteira utilizando pré-incremento de ponteiro para caractere.|
|9|[adicao_de_ponteiro_char_de_ponteiro_int.c](ponteiro/adicao_de_ponteiro_char_de_ponteiro_int.c)|Acesso a bytes de variável inteira através de deslocamento com ponteiro para caractere.|
|10|[comparacao_ponteiros.c](ponteiro/comparacao_ponteiros.c)|Comparação relacional entre ponteiros e testes de verificação de ponteiro nulo (`NULL`).|
|11|[acesso_rapido_de_elemento_de_vetor_por_soma_de_ponteiro.c](ponteiro/acesso_rapido_de_elemento_de_vetor_por_soma_de_ponteiro.c)|Acesso a elementos de vetor por deslocamento aritmético a partir do endereço base.|
|12|[acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c](ponteiro/acesso_rapido_de_vetor_por_incremento_de_ponteiro_em_laco.c)|Acesso e percorrimento de vetor através do pós-incremento de ponteiro em laço.|
|13|[acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c](ponteiro/acesso_linear_de_elementos_de_matriz_por_soma_de_ponteiro.c)|Acesso linear aos elementos de uma matriz bidimensional por deslocamento aritmético de ponteiro.|
|14|[vetor_de_ponteiros.c](ponteiro/vetor_de_ponteiros.c)|Criação e inicialização de um vetor de ponteiros armazenando endereços de memória.|
|15|[formacao_de_matriz_com_vetor_de_ponteiros.c](ponteiro/formacao_de_matriz_com_vetor_de_ponteiros.c)|Construção de matriz bidimensional a partir de um vetor de ponteiros para vetores.|
|16|[prevenir_de_alteracao_de_vetor.c](ponteiro/prevenir_de_alteracao_de_vetor.c)|Proteção contra alteração dos elementos de vetor usando ponteiro para constante (`const int *`).|
|17|[prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c](ponteiro/prevenir_de_alteracao_de_ponteiro_e_nao_dos_elementos.c)|Fixação de endereço com ponteiro constante (`int * const`) permitindo modificar os elementos.|
|18|[prevenir_de_alteracao_de_ponteiro_e_elementos.c](ponteiro/prevenir_de_alteracao_de_ponteiro_e_elementos.c)|Proteção total contra alteração de ponteiro e elementos com `const int * const`.|
|19|[ponteiro_duplo.c](ponteiro/ponteiro_duplo.c)|Declaração e uso de ponteiro para ponteiro (ponteiro duplo) com dupla desreferenciação.|
|20|[indirecao_de_nivel_3.c](ponteiro/indirecao_de_nivel_3.c)|Demonstração de múltiplos níveis de indireção com ponteiro triplo (nível 3) encadeando endereços.|

### Alocação Dinâmica
Códigos-fonte demonstrando conceitos fundamentais de alocação dinâmica de memória em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[alocacao_de_vetor_VLA.c](alocacao_dinamica/alocacao_de_vetor_VLA.c)|Alocação de vetor e matriz usando VLA (Variable Length Array).|
|2|[malloc_basico.c](alocacao_dinamica/malloc_basico.c)|Alocação básica de bloco de memória na heap com `malloc` e liberação com `free`.|
|3|[alocacao_de_tipos_primitivos.c](alocacao_dinamica/alocacao_de_tipos_primitivos.c)|Alocação dinâmica para tipos primitivos com `sizeof`, teste de `NULL` e liberação com `free`.|
|4|[alocacao_de_vetor_de_tipo_simples.c](alocacao_dinamica/alocacao_de_vetor_de_tipo_simples.c)|Alocação dinâmica de vetor unidimensional com `malloc`, tratamento de erro e liberação.|
|5|[alocacao_de_vetor_e_errno_perror.c](alocacao_dinamica/alocacao_de_vetor_e_errno_perror.c)|Tratamento e exibição de falha de alocação de memória com `errno`, `ENOMEM`, `strerror` e `perror`.|
|6|[aloca_matriz2D.c](alocacao_dinamica/aloca_matriz2D.c)|Alocação dinâmica de matriz bidimensional via vetor de ponteiros com tratamento de falhas e desalocação.|
|7|[aloca_matriz2D_de_coluna_fixa.c](alocacao_dinamica/aloca_matriz2D_de_coluna_fixa.c)|Alocação dinâmica de matriz bidimensional contígua usando ponteiro para vetor de colunas fixas.|
|8|[alocacao_com_calloc.c](alocacao_dinamica/alocacao_com_calloc.c)|Alocação dinâmica de memória com inicialização automática em zero utilizando a função `calloc`.|
|9|[realocacao_de_vetor_com_realloc.c](alocacao_dinamica/realocacao_de_vetor_com_realloc.c)|Redimensionamento dinâmico de vetor com `realloc` em operações de expansão e compressão.|
|10|[alocacao_moderna_de_matriz3D.c](alocacao_dinamica/alocacao_moderna_de_matriz3D.c)|Alocação moderna de matriz 3D em bloco contíguo único e liberação com um único `free`.|
|11|[alocacao_tradicional_de_matriz3D.c](alocacao_dinamica/alocacao_tradicional_de_matriz3D.c)|Alocação tradicional de matriz 3D em camadas com ponteiro triplo e desalocação hierárquica.|

## Sub-rotinas
Códigos-fonte demonstrando a definição e o uso de sub-rotinas (procedimentos e funções) em C, mecanismos de passagem de parâmetros por valor e referência, escopo de variáveis, ponteiros para funções, macros e programação modular.

### Sub-rotinas
Códigos-fonte focados no estudo prático de sub-rotinas, passagem de parâmetros e ponteiros para funções em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[exemplo_de_procedimento_sem_parametros.c](sub_rotinas/exemplo_de_procedimento_sem_parametros.c)|Declaração e chamada de procedimento sem parâmetros para exibição de mensagem e término via exit.|
|2|[exibir_nome_da_sub_rotina_com_prototipo.c](sub_rotinas/exibir_nome_da_sub_rotina_com_prototipo.c)|Declaração de protótipo de procedimento e identificação do nome da sub-rotina via __func__.|
|3|[passagem_por_valor.c](sub_rotinas/passagem_por_valor.c)|Passagem de parâmetro por valor para sub-rotina com controle de fluxo em estrutura switch.|
|4|[varios_parametros_por_valor.c](sub_rotinas/varios_parametros_por_valor.c)|Passagem de múltiplos parâmetros por valor para procedimento de cálculo e exibição de soma.|
|5|[varios_parametros_por_valor_com_prototipo.c](sub_rotinas/varios_parametros_por_valor_com_prototipo.c)|Declaração prévia de protótipo com múltiplos parâmetros por valor e definição posterior da função.|
|6|[escopo_de_variaveis.c](sub_rotinas/escopo_de_variaveis.c)|Diferenciação entre escopo global e local em procedimento para troca de valores de variáveis.|
|7|[variavel_estatica.c](sub_rotinas/variavel_estatica.c)|Preservação de estado entre chamadas sucessivas com variável local estática (static).|
|8|[troca_valores_reais_por_referencia.c](sub_rotinas/troca_valores_reais_por_referencia.c)|Troca de valores de variáveis reais através de passagem de parâmetros por referência com ponteiros.|
|9|[protecao_contra_alteracao_de_parametro_referencia.c](sub_rotinas/protecao_contra_alteracao_de_parametro_referencia.c)|Proteção contra alteração de dados recebidos por referência através do qualificador const.|
|10|[passagem_de_vetor_por_parametro_com_decaimento.c](sub_rotinas/passagem_de_vetor_por_parametro_com_decaimento.c)|Passagem de vetor por parâmetro com decaimento para ponteiro e exibição com qualificador const.|
|11|[passagem_vetor_por_parametro_ponteiro_explicito.c](sub_rotinas/passagem_vetor_por_parametro_ponteiro_explicito.c)|Passagem de vetor por parâmetro através de ponteiro explícito para vetor evitando o decaimento.|
|12|[passagem_por_parametro_de_vetor_alocado.c](sub_rotinas/passagem_por_parametro_de_vetor_alocado.c)|Passagem de vetor alocado dinamicamente na heap por parâmetro e desalocação com free.|
|13|[passagem_de_matriz_constante_por_ponteiro.c](sub_rotinas/passagem_de_matriz_constante_por_ponteiro.c)|Passagem de matriz constante por parâmetro comparando arranjo bidimensional e ponteiro duplo.|
|14|[funcao_fatorial.c](sub_rotinas/funcao_fatorial.c)|Implementação de função com retorno de valor para cálculo de fatorial com tipos da stdint.h.|
|15|[retorno_de_vetor_matriz.c](sub_rotinas/retorno_de_vetor_matriz.c)|Retorno de ponteiros para vetor e matriz alocados dinamicamente na heap através de funções.|
|16|[ponteiro_para_funcao.c](sub_rotinas/ponteiro_para_funcao.c)|Passagem de ponteiro para função como parâmetro para verificação de troca de sinal em intervalo.|
|17|[ponteiro_apelidado_para_funcao.c](sub_rotinas/ponteiro_apelidado_para_funcao.c)|Criação de apelido de tipo com typedef para ponteiro de função e seu uso como parâmetro.|

### Macros
Códigos-fonte focados no uso do pré-processador para criação de macros parametrizadas e blocos multilinhas.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[macro_modulo.c](sub_rotinas/macro_modulo.c)|Definição de macro parametrizada com operador ternário para cálculo do valor absoluto (módulo).|
|2|[macro_multilinhas.c](sub_rotinas/macro_multilinhas.c)|Definição de macro multilinha com a estrutura do-while(0) para emissão de mensagens de erro.|

### Compilação separada
Códigos-fonte focados na modularização de código através da divisão em arquivos de cabeçalho (.h) e de implementação (.c).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[funcoes_vetoriais.h](sub_rotinas/compilacao_separada/funcoes_vetoriais.h)|Arquivo de cabeçalho (.h) com inclusão de guarda, constantes e protótipos de funções vetoriais.|
|2|[funcoes_vetoriais.c](sub_rotinas/compilacao_separada/funcoes_vetoriais.c)|Implementação modular das funções de leitura, exibição e cálculo de média de elementos de vetor.|
|3|[main_uso_das_funcoes_vetoriais.c](sub_rotinas/compilacao_separada/main_uso_das_funcoes_vetoriais.c)|Programa principal demonstrando inclusão de cabeçalho customizado e chamada das funções modulares.|

## Extern
Códigos-fonte demonstrando o compartilhamento de variáveis globais e funções entre múltiplos arquivos com a palavra-chave extern.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[funcoes_vetoriais_e_variaveis_globais.h](sub_rotinas/compilacao_separada/extern/funcoes_vetoriais_e_variaveis_globais.h)|Declaração de variáveis externas com extern, função inline e protótipos em arquivo de cabeçalho.|
|2|[funcoes_vetoriais_e_variaveis_externas.c](sub_rotinas/compilacao_separada/extern/funcoes_vetoriais_e_variaveis_externas.c)|Definição de variáveis globais compartilhadas, variável de arquivo estática e implementação de sub-rotinas.|
|3|[main_uso_das_funcoes_vetoriais_e_variaveis_externas.c](sub_rotinas/compilacao_separada/extern/main_uso_das_funcoes_vetoriais_e_variaveis_externas.c)|Programa principal demonstrando modificação de variáveis externas compartilhadas e invocação modular.|

