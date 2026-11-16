# Parte 3 - Manipulação de Strings, Estruturas, Campos de Bits e Uniões

Este diretório contém os códigos-fonte da **Parte 3** da disciplina de Linguagem de Programação, abrangendo manipulação de strings, tipos de dados definidos pelo usuário em C: estruturas (`struct`), técnicas de inicialização, passagem por valor e por referência, alinhamento de memória (`alignof` e `alignas`), campos de bits e uniões (`union`).

## Manipulação de Strings, Estruturas, Campos de Bits e Uniões
Códigos-fonte demonstrando a manipulação de strings, criação e manipulação de tipos compostos heterogêneos, otimização do uso de memória com campos de bits e compartilhamento de região de memória com uniões.

### Manipulação de Strings
Códigos-fonte focados no estudo prático de manipulação de strings em C.
|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[funcoes_de_manipulacao_de_string.c](strings/funcoes_de_manipulacao_de_string.c)|Exemplo de uso das funções de manipulação de strings: strlen, strcmp, strcpy, strcat, strcspn,strchr, strrchr.|
|2|[argumentos_da_linha_de_comando.c](strings/argumentos_de_linha_de_comando.c)|Exemplo de uso dos argumentos da linha de comando: argc, argv.|

### Estrutura
Códigos-fonte focados no estudo prático de estruturas, inicializações, acesso via ponteiros, passagem de parâmetros e alinhamento de memória em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[declaracao_da_estrutura_disciplina_com_media_das_notas.c](estrutura/declaracao_da_estrutura_disciplina_com_media_das_notas.c)|Declaração de estrutura global e acesso aos seus membros com o operador ponto para cálculo da média de notas.|
|2|[declaracao_de_variavel_de_estrutura_anonima.c](estrutura/declaracao_de_variavel_de_estrutura_anonima.c)|Declaração de variável a partir de uma estrutura anônima local para leitura e cálculo da média de notas.|
|3|[inicializacao_uniforme_de_membros_de_estrutura.c](estrutura/inicializacao_uniforme_de_membros_de_estrutura.c)|Inicialização uniforme em lista de chaves dos membros de uma estrutura na sua declaração.|
|4|[inicializacao_uniforme_de_membro_vetor_da_estrutura.c](estrutura/inicializacao_uniforme_de_membro_vetor_da_estrutura.c)|Inicialização uniforme de estrutura contendo um vetor como membro por meio de chaves aninhadas.|
|5|[inicializacao_designada_de_membros_de_estrutura.c](estrutura/inicializacao_designada_de_membros_de_estrutura.c)|Inicialização designada explícita e parcial de membros de estrutura com preenchimento automático em zero.|
|6|[inicializacao_de_membros_estrutura_por_literal_composto.c](estrutura/inicializacao_de_membros_estrutura_por_literal_composto.c)|Atribuição de valores aos membros de uma estrutura já declarada utilizando literal composto.|
|7|[vetor_da_estrutura_disciplina_com_inicializacao_uniforme.c](estrutura/vetor_da_estrutura_disciplina_com_inicializacao_uniforme.c)|Declaração, inicialização uniforme e percorrimento de um vetor de estruturas com membro vetor aninhado.|
|8|[atribuicao_de_estruturas.c](estrutura/atribuicao_de_estruturas.c)|Cópia direta de todos os membros entre variáveis de mesma estrutura utilizando o operador de atribuição.|
|9|[duplicacao_de_memoria_na_passagem_por_copia_de_estrutura.c](estrutura/duplicacao_de_memoria_na_passagem_por_copia_de_estrutura.c)|Demonstração da duplicação de memória na passagem por valor (cópia) de uma estrutura de grande porte.|
|10|[passagem_problematica_por_copia_de_estrutura_com_membro_ponteiro.c](estrutura/passagem_problematica_por_copia_de_estrutura_com_membro_ponteiro.c)|Problema de liberação dupla de memória (double free) ao passar por cópia uma estrutura com membro ponteiro.|
|11|[acesso_especial_de_membros_de_estrutura_ponteiro.c](estrutura/acesso_especial_de_membros_de_estrutura_ponteiro.c)|Alocação dinâmica de estrutura e acesso aos seus membros via ponteiro com os operadores seta e ponto.|
|12|[passagem_por_referencia_de_estrutura.c](estrutura/passagem_por_referencia_de_estrutura.c)|Passagem de estrutura por referência com ponteiros para leitura de dados e proteção com const no cálculo da média.|
|13|[alinhamento_de_estruturas.c](estrutura/alinhamento_de_estruturas.c)|Análise do tamanho e alinhamento de estruturas na memória com inserção implícita de bytes de preenchimento (padding).|
|14|[alinhamento_de_estruturas_equivalentes.c](estrutura/alinhamento_de_estruturas_equivalentes.c)|Comparação entre uma estrutura com diversos tipos de dados e sua estrutura equivalente com preenchimento explícito.|
|15|[alteracao_do_alinhamento_de_estrutura_com_alignas.c](estrutura/alteracao_do_alinhamento_de_estrutura_com_alignas.c)|Alteração do alinhamento de memória de uma estrutura utilizando o atributo de alinhamento aligned.|
|16|[alteracao_do_alinhamento_de_membros_de_estrutura.c](estrutura/alteracao_do_alinhamento_de_membros_de_estrutura.c)|Definição de alinhamento específico para membros de uma estrutura utilizando o especificador alignas.|
|17|[alteracao_do_alinhamento_de_variaveis.c](estrutura/alteracao_do_alinhamento_de_variaveis.c)|Alteração do alinhamento de variáveis na memória com alignas e verificação do distanciamento entre endereços.|
|18|[operador_alignof_de_varios_tipos.c](estrutura/operador_alignof_de_varios_tipos.c)|Consulta do requisito de alinhamento em bytes de tipos primitivos, ponteiro, vetor e estrutura com alignof.|

### Campo de bits
Códigos-fonte focados na definição e manipulação de campos de bits em estruturas para otimização de armazenamento em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[definicao_de_campo_de_bits.c](campo_de_bits/definicao_de_campo_de_bits.c)|Definição, inicialização e atribuição de estrutura com campos de bits para compactação de dados inteiros sem sinal.|
|2|[campo_de_bits_com_membro_anonimo.c](campo_de_bits/campo_de_bits_com_membro_anonimo.c)|Uso de membro anônimo com largura zero em campo de bits para forçar o alinhamento no próximo bloco de memória.|

### União
Códigos-fonte demonstrando o compartilhamento da mesma região de memória por diferentes tipos de dados através de uniões em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[exemplo_de_uniao_short_float.c](uniao/exemplo_de_uniao_short_float.c)|Declaração e uso de união demonstrando o compartilhamento do mesmo espaço de memória entre membros de tipos diferentes.|
|2|[extracao_de_canais_de_cor_com_uniao_anonima_e_campo_de_bits.c](uniao/extracao_de_canais_de_cor_com_uniao_anonima_e_campo_de_bits.c)|Extração de canais de cor RGB a partir de inteiro de 16 bits combinando união anônima e estrutura com campos de bits.|
