#include <stdio.h>

int main()
{
    const int BANDEIRA_VERDE = 0;
    const int BANDEIRA_AMARELA = 1;
    const int BANDEIRA_VERMELHA_1 = 2;
    const int BANDEIRA_VERMELHA_2 = 3;
    const int BANDEIRA_PRETA = 4;

    int bandeiraTarifaria;
    float consumoDeEnergiaEmW, tarifaDeEnergiaEmReais = 0.67099f;

    puts("Este programa calcula o valor da conta de energia para uma bandeira tarifária\n\n");

    puts("Entre com o consumo de energia");
    if (scanf("%f", &consumoDeEnergiaEmW) != 1)
    {
        // Tratamento simples
    }

    puts("Entre com o inteiro correspondente a uma das opções da bandeira tarifária abaixo:\n");
    puts("0 - Verde\t1 - Amarela\t2 - Vermelha patamar 1\t3 - Vermelha patamar 2\t4 - Preta\n");
    if (scanf("%d", &bandeiraTarifaria) != 1)
    {
        // Tratamento simples
    }

    float adicionalDeBanderia;

    if (bandeiraTarifaria == BANDEIRA_VERDE)
        adicionalDeBanderia = 0.0f;
    else if (bandeiraTarifaria == BANDEIRA_AMARELA)
        adicionalDeBanderia = 0.01874f;
    else if (bandeiraTarifaria == BANDEIRA_VERMELHA_1)
        adicionalDeBanderia = 0.03971f;
    else if (bandeiraTarifaria == BANDEIRA_VERMELHA_2)
        adicionalDeBanderia = 0.09492f;
    else if (bandeiraTarifaria == BANDEIRA_PRETA)
        adicionalDeBanderia = 0.142f;
    else
    {
        puts("Bandeira tarifária selecionada não existe.\nFinalizando");
        return 1;
    }

    float valorDaContaDeEnergiaEmReais = consumoDeEnergiaEmW * (tarifaDeEnergiaEmReais + adicionalDeBanderia);

    printf("O valor da conta de energia = %f R$ \n", valorDaContaDeEnergiaEmReais);
    return 0;
}
