# Parte 1 - Introdução à Programação em C

Este diretório contém os códigos-fonte da **Parte 1** da disciplina de Linguagem de Programação, abrangendo conceitos fundamentais de declaração de variáveis, entrada/saída, operadores, funções matemáticas e números complexos em C.

## Introdução
São apresentados os fundamentos iniciais da Linguagem de Programação C.
### Declaração de variáveis
Códigos-fonte que exemplificam a declaração de variáveis, constantes (`#define`, `const`, `enum`), tipos de dados básicos e avançados, e renomeação de tipos com `typedef`.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[declaracao_de_variaveis.c](introducao/declaracao/declaracao_de_variaveis.c)|Exemplos fundamentais de declaração, inicialização e atribuição de variáveis de tipos primitivos.|
|2|[aprofundando_tipo_logico.c](introducao/declaracao/aprofundando_tipo_logico.c)|Uso de tipos booleanos (`bool`, `true`, `false`) com a biblioteca `<stdbool.h>`.|
|3|[aprofundando_tipo_caractere.c](introducao/declaracao/aprofundando_tipo_caractere.c)|Uso e manipulação de caracteres (`char`), tabela ASCII e caracteres especiais.|
|4|[aprofundando_tipo_cadeia.c](introducao/declaracao/aprofundando_tipo_cadeia.c)|Declaração, inicialização, modificação e imutabilidade de cadeias de caracteres (strings) em C.|
|5|[constante_com_define.c](introducao/declaracao/constante_com_define.c)|Definição de constantes com a diretiva de pré-processador `#define`.|
|6|[constante_com_define_teste_escopo.c](introducao/declaracao/constante_com_define_teste_escopo.c)|Demonstração do escopo global e visibilidade de constantes definidas via `#define`.|
|7|[constantes_enumeradas.c](introducao/declaracao/constantes_enumeradas.c)|Definição e uso de constantes enumeradas com a palavra-chave `enum`.|
|8|[criacao_vetor_com_const.c](introducao/declaracao/criacao_vetor_com_const.c)|Declaração de vetores com tamanhos fixos utilizando o qualificador `const`.|
|9|[renomeacao_de_tipos.c](introducao/declaracao/renomeacao_de_tipos.c)|Definição de novos nomes para tipos existentes utilizando a palavra-chave `typedef`.|

### Saída pelo console
Códigos-fonte cobrindo formatação de saída com `printf`, `putchar`, `puts`, modificadores de largura/precisão, especificadores de base, tipos da `stdint.h` e caracteres de escape.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[saida_com_printf.c](introducao/saida/saida_com_printf.c)|Impressão de mensagens simples e formatação básica utilizando a função `printf`.|
|2|[saida_com_printf_locale.c](introducao/saida/saida_com_printf_locale.c)|Configuração de localidade (`setlocale`) para exibição de caracteres acentuados e numeração regional.|
|3|[caracteres_especiais_de_saida.c](introducao/saida/caracteres_especiais_de_saida.c)|Uso de sequências de escape (`\n`, `\t`, `\"`, `\\`, `\r`, `\b`) para formatação de texto.|
|4|[saida_de_varios_tipos_com_printf.c](introducao/saida/saida_de_varios_tipos_com_printf.c)|Impressão simultânea de múltiplos tipos de dados (`int`, `float`, `char`, `string`) no `printf`.|
|5|[saida_com_modificadores_comprimento.c](introducao/saida/saida_com_modificadores_comprimento.c)|Formatação de saída com modificadores de comprimento (`h`, `l`, `ll`, `z`).|
|6|[saida_tipos_stdint.c](introducao/saida/saida_tipos_stdint.c)|Exibição de inteiros de tamanho fixo (`stdint.h`) com macros de impressão da `<inttypes.h>` (`PRId32`, `PRIu64`).|
|7|[saida_formatada_inteiros.c](introducao/saida/saida_formatada_inteiros.c)|Formatação de inteiros com preenchimento de zeros, alinhamento e sinal explícito (`%+d`, `%05d`).|
|8|[saida_em_diferentes_bases.c](introducao/saida/saida_em_diferentes_bases.c)|Exibição de números inteiros nas bases decimal, hexadecimal (`%x`, `%X`) e octal (`%o`).|
|9|[saida_reais_com_precisao.c](introducao/saida/saida_reais_com_precisao.c)|Controle de casas decimais na exibição de números de ponto flutuante (`%.2f`, `%.4f`).|
|10|[saida_reais_com_largura_precisao.c](introducao/saida/saida_reais_com_largura_precisao.c)|Formatação de números reais combinando controle de largura total e precisão decimal.|
|11|[saida_notacao_cientifica_e_compacta.c](introducao/saida/saida_notacao_cientifica_e_compacta.c)|Exibição de números de ponto flutuante em notação científica (`%e`) e formato compacto (`%g`).|
|12|[saida_formatacao_cadeia.c](introducao/saida/saida_formatacao_cadeia.c)|Formatação de cadeias de caracteres com especificadores de largura e alinhamento no `printf`.|
|13|[saida_com_putchar.c](introducao/saida/saida_com_putchar.c)|Exibição de caracteres individuais na saída padrão utilizando a função `putchar`.|
|14|[saida_com_puts.c](introducao/saida/saida_com_puts.c)|Exibição de cadeias de caracteres com quebra de linha automática usando a função `puts`.|

### Entrada pelo consolo
Códigos-fonte focados na leitura de dados de entrada via teclado utilizando especificadores de formato, `getchar()`, modificadores e tipos inteiros com largura fixa (`stdint.h`).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[entrada_com_especificadores.c](introducao/entrada/entrada_com_especificadores.c)|Leitura de dados de entrada com `scanf` e diferentes especificadores de formato (`%d`, `%f`, `%c`, `%s`).|
|2|[entrada_com_modificadores.c](introducao/entrada/entrada_com_modificadores.c)|Leitura de dados utilizando modificadores de largura e supressão de campo no `scanf`.|
|3|[entrada_de_tipos_stdint.c](introducao/entrada/entrada_de_tipos_stdint.c)|Leitura de inteiros com largura garantida (`int32_t`, `uint64_t`, etc.) usando macros de especificadores (`SCNd32`, `SCNu64`).|
|4|[entrada_com_getchar.c](introducao/entrada/entrada_com_getchar.c)|Captura e leitura de caracteres individuais a partir da entrada padrão usando `getchar()`.|

### Operadores
Códigos-fonte focados no estudo de conversões de tipos de dados (casting explícito, conversão em atribuição e promoções em operações aritméticas).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[conversoes_de_tipo_com_casting.c](introducao/operadores/conversoes_de_tipo_com_casting.c)|Demonstração de conversão explícita de tipos utilizando o operador de casting `(tipo)`.|
|2|[conversoes_de_tipo_em_atribuicao.c](introducao/operadores/conversoes_de_tipo_em_atribuicao.c)|Conversões implícitas de tipos ocorridas durante atribuições (promoção e despromoção/truncamento).|
|3|[conversoes_de_tipo_em_operacoes_aritmeticas.c](introducao/operadores/conversoes_de_tipo_em_operacoes_aritmeticas.c)|Promoções aritméticas automáticas e regras de conversão implícita em expressões.|

#### Atribuicão
Código-fonte demonstrando o uso dos operadores de atribuição compostos ou de contração em C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operador_de_contracao.c](introducao/operadores/atribuicao/operador_de_contracao.c)|Uso de operadores de atribuição compostos (`+=`, `-=`, `*=`, `/=`, `%=`).|

#### Operador `sizeof`
Código-fonte demonstrando a utilização do operador `sizeof` para determinação de tamanho em bytes de tipos e variáveis em memória.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operador_sizeof.c](introducao/operadores/sizeof/operador_sizeof.c)|Medição do tamanho em bytes de tipos primitivos, estruturas e variáveis com o operador `sizeof`.|

#### Operador virgula
Código-fonte demonstrando o comportamento e precedência do operador vírgula em expressões C.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operador_virgula.c](introducao/operadores/virgula/operador_virgula.c)|Uso do operador vírgula (`,`) para encadeamento e avaliação sequencial de expressões.|

#### Conversões de tipos
Códigos-fonte focados no estudo de conversões de tipos de dados (casting explícito, conversão em atribuição e promoções em operações aritméticas).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[conversoes_de_tipo_em_atribuicao.c](introducao/operadores/conversoes_de_tipo_em_atribuicao.c)|Conversões implícitas de tipos ocorridas durante atribuições (promoção e despromoção/truncamento).|
|2|[conversoes_de_tipo_em_operacoes_aritmeticas.c](introducao/operadores/conversoes_de_tipo_em_operacoes_aritmeticas.c)|Promoções aritméticas automáticas e regras de conversão implícita em expressões.|
|3|[conversoes_de_tipo_com_casting.c](introducao/operadores/conversoes_de_tipo_com_casting.c)|Demonstração de conversão explícita de tipos utilizando o operador de casting `(tipo)`.|

#### Operadores bit-a-bit (*bitwise*)
Códigos-fonte demonstrando operadores bit a bit em C (AND, OR, XOR, NOT e deslocamentos à esquerda e à direita).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[operador_e_ou_bit_a_bit.c](introducao/operadores/bit_a_bit/operador_e_ou_bit_a_bit.c)|Uso dos operadores lógicos bit a bit AND (`&`) e OR (`\|`).|
|2|[exemplo_todos_operadores_bit_a_bit.c](introducao/operadores/bit_a_bit/exemplo_todos_operadores_bit_a_bit.c)|Demonstração integrada de todos os operadores bit a bit (`&`, `\|`, `^`, `~`, `<<`, `>>`).|
|3|[operador_deslocamento_esquerda.c](introducao/operadores/bit_a_bit/operador_deslocamento_esquerda.c)|Funcionamento do operador de deslocamento de bits à esquerda (`<<`) e multiplicação por potências de 2.|
|4|[operador_deslocamento_direita.c](introducao/operadores/bit_a_bit/operador_deslocamento_direita.c)|Funcionamento do operador de deslocamento de bits à direita (`>>`) e divisão por potências de 2.|

#### Manipulação de bits
Códigos-fonte com técnicas e algoritmos clássicos de manipulação de bits (ativar, limpar, alternar, isolar, testar potência de 2, etc.).

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[ativar_todos_os_bits.c](introducao/operadores/bit_a_bit/manipulacao/ativar_todos_os_bits.c)|Definição de todos os bits de uma variável inteira para 1.|
|2|[limpar_bit_ativo_mais_a_direita.c](introducao/operadores/bit_a_bit/manipulacao/limpar_bit_ativo_mais_a_direita.c)|Remoção do bit ativo (1) menos significativo (mais à direita) de um número inteiro.|
|3|[e_potencia_de_2.c](introducao/operadores/bit_a_bit/manipulacao/e_potencia_de_2.c)|Verificação se um número inteiro é uma potência de 2 utilizando operações bit a bit (`n & (n - 1)`).|
|4|[isolar_bit.c](introducao/operadores/bit_a_bit/manipulacao/isolar_bit.c)|Isolamento de um bit específico em uma posição.|
|5|[selecionar_bit.c](introducao/operadores/bit_a_bit/manipulacao/selecionar_bit.c)|Consulta do valor de um bit específico em uma determinada posição.|
|6|[limpar_bit.c](introducao/operadores/bit_a_bit/manipulacao/limpar_bit.c)|Limpeza (set para 0) de um bit específico em uma posição usando AND com máscara invertida.|
|7|[ativar_bit.c](introducao/operadores/bit_a_bit/manipulacao/ativar_bit.c)|Ativação (set para 1) de um bit em uma posição específica usando a operação OR (`\|`).|
|8|[alternar_bit.c](introducao/operadores/bit_a_bit/manipulacao/alternar_bit.c)|Inversão (toggle) do estado de um bit específico utilizando a operação XOR (`^`).|
|9|[alterar_bit.c](introducao/operadores/bit_a_bit/manipulacao/alterar_bit.c)|Algoritmo para alterar o valor de um bit específico em uma posição desejada.|

### Funções matemáticas
Códigos-fonte exemplificando o uso das funções da biblioteca `<math.h>` para arredondamento, classificação, comparação, divisão, valor absoluto, exponenciação, trigonometria e funções hiperbólicas.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[exemplo_funcoes_matematicas.c](introducao/funcoes_matematicas/exemplo_funcoes_matematicas.c)|Visão geral e demonstração prática das principais funções matemáticas da biblioteca `<math.h>`.|
|2|[operacoes_potenciacao_e_raizes.c](introducao/funcoes_matematicas/operacoes_potenciacao_e_raizes.c)|Cálculo de potenciação e raízes com `pow()`, `sqrt()`, `cbrt()` e `hypot()`.|
|3|[operacoes_exponenciais_e_logaritmicas.c](introducao/funcoes_matematicas/operacoes_exponenciais_e_logaritmicas.c)|Funções exponenciais e logarítmicas incluindo `exp()`, `log()`, `log10()` e `log2()`.|
|4|[operacoes_de_arredondamento.c](introducao/funcoes_matematicas/operacoes_de_arredondamento.c)|Operações de arredondamento de números reais usando `floor()`, `ceil()`, `round()` e `trunc()`.|
|5|[operacoes_de_sinal_e_valor_absoluto.c](introducao/funcoes_matematicas/operacoes_de_sinal_e_valor_absoluto.c)|Cálculo de valor absoluto e manipulação de sinal usando `abs()`, `fabs()` e `copysign()`.|
|6|[operacoes_de_divisao_resto.c](introducao/funcoes_matematicas/operacoes_de_divisao_resto.c)|Cálculo do resto da divisão e quociente com `fmod()`, `remainder()` e `remquo()`.|
|7|[operacoes_de_comparacao_e_extremos.c](introducao/funcoes_matematicas/operacoes_de_comparacao_e_extremos.c)|Comparação de valores de ponto flutuante e obtenção de extremos com `fmax()`, `fmin()` e `fdim()`.|
|8|[operacoes_de_classificacao_reais.c](introducao/funcoes_matematicas/operacoes_de_classificacao_reais.c)|Classificação de valores de ponto flutuante usando `isnan()`, `isinf()`, `isfinite()` e `signbit()`.|
|9|[operacoes_trigonometricas.c](introducao/funcoes_matematicas/operacoes_trigonometricas.c)|Funções trigonométricas diretas e inversas (`sin()`, `cos()`, `tan()`, `asin()`, `acos()`, `atan()`).|
|10|[operacoes_hiperbolicas.c](introducao/funcoes_matematicas/operacoes_hiperbolicas.c)|Cálculo de funções trigonométricas hiperbólicas (`sinh()`, `cosh()`, `tanh()`) e suas inversas.|
|11|[constantes_matematicas_especiais.c](introducao/declaracao/constantes_matematicas_especiais.c)|Utilização de constantes matemáticas pré-definidas da biblioteca `<math.h>` (ex: `M_PI`, `M_E`).|

#### Números complexos
Código-fonte dedicado à declaração, inicialização, leitura, exibição e operações aritméticas com números complexos em C11/C99 via `<complex.h>`.

|**Nº**|**Código fonte**|**Descrição**|
|---|---|---|
|1|[numeros_complexos.c](introducao/numeros_complexos/numeros_complexos.c)|Manipulação de números complexos em C usando a biblioteca `<complex.h>` e macros `CMPLX`, `creal` e `cimag`.|