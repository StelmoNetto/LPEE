#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Única instrução nos blocos
    {
        double valor1 = 2.1, valor2 = 4.4;
        double maior;

        if (valor1 >= valor2)
            maior = valor1;
        else
            maior = valor2;

        printf("maior = %f\n", maior);
    }

    // Múltiplas instruções nos blocos
    {
        double potenciaDoAparelhoEmW = 500.0;
        double tempoDeUsoDiarioEmH = 3.5;

        double comsumoDeEnergiaDiarioEmWH = potenciaDoAparelhoEmW * tempoDeUsoDiarioEmH;

        bool emKHW = true;

        printf("Consumo de energia diário = ");

        if (emKHW)
        {
            double comsumoDeEnergiaDiarioEmKWH = comsumoDeEnergiaDiarioEmWH / 1000.0;
            printf("%f kWh\n", comsumoDeEnergiaDiarioEmKWH);
        }
        else
        {
            printf("%f Wh\n", comsumoDeEnergiaDiarioEmWH);
        }
    }
    return 0;
}
