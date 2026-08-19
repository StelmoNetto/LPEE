#include <stdio.h>

int main()
{
    enum
    {
        BANDEIRA_VERDE = 0,
        BANDEIRA_AMARELA = 1,
        BANDEIRA_VERMELHA_1 = 2,
        BANDEIRA_VERMELHA_2 = 3,
        BANDEIRA_PRETA = 4
    };

    int bandeiraTarifaria;
    float consumoDeEnergiaEmW, tarifaDeEnergiaEmReais = 0.67099f;

    printf("Este programa calcula o valor da conta de energia para uma bandeira tarifária\n\n");

    printf("Entre com o consumo de energia\n");
    if (scanf("%f", &consumoDeEnergiaEmW) != 1)
    {
        puts("Erro ao ler o consumo");
        return 1;
    }

    printf("Entre com o inteiro correspondente a uma das opções da bandeira tarifária abaixo:\n");
    printf("0 - Verde\t1 - Amarela\t2 - Vermelha patamar 1\t3 - Vermelha patamar 2\t4 - Preta\n");
    if (scanf("%d", &bandeiraTarifaria) != 1)
    {
        puts("Erro ao ler a bandeira tarifária");
        return 1;
    }

    float adicionalDeBanderia;

    switch (bandeiraTarifaria)
    {
        case BANDEIRA_VERDE:
            adicionalDeBanderia = 0.0f;
        break;

        case BANDEIRA_AMARELA:
            adicionalDeBanderia = 0.01874f;
        break;

        case BANDEIRA_VERMELHA_1:
            adicionalDeBanderia = 0.03971f;
        break;

        case BANDEIRA_VERMELHA_2:
            adicionalDeBanderia = 0.09492f;
        break;

        case BANDEIRA_PRETA:
            adicionalDeBanderia = 0.142f;
        break;

        default:
            puts("Bandeira tarifária selecionada não existe.\nFinalizando");
            return 1;
    }

    float valorDaContaDeEnergiaEmReais = consumoDeEnergiaEmW * (tarifaDeEnergiaEmReais + adicionalDeBanderia);

    printf("O valor da conta de energia = %f\n", valorDaContaDeEnergiaEmReais);
    return 0;
}
