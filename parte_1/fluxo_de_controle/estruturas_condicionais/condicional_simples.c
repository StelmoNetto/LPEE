#include <stdio.h>

int main()
{
    // Condicional simples com uma única linha
    {
        float tensaoDoCircuito, resistenciaEmOhm;

        puts("Entre com a tensão da fonte em Volts\n");
        if (scanf("%f", &tensaoDoCircuito) != 1)
        {
            puts("Erro ao ler a tensão");
            return 1;
        }

        puts("Entre com a resistência em Volts\n");
        if (scanf("%f", &resistenciaEmOhm) != 1)
        {
            puts("Erro ao ler a resistência");
            return 1;
        }

        float correnteDoCircuitoEmA = 0.0f;

        if (resistenciaEmOhm > 0)
            correnteDoCircuitoEmA = tensaoDoCircuito / resistenciaEmOhm;

        printf("Corrente do circuito = %f A\n", correnteDoCircuitoEmA);
    }

    // Condicional simples com mais de uma linha
    {
        const double CORRENTE_MAXIMA_DO_FUSIVEL_EM_AMPERE = 5.1;

        double tensaoNoCircuitoEmV = 10.0;
        double r1EmOhm = 1.0, r2EmOhm = 1.0;

        double resistenciaEquivalente = r1EmOhm + r2EmOhm;

        if (resistenciaEquivalente <= 0)
        {
            puts("Não é possível calcular a corrente do circuito: \n Resistência equivalente <= 0\n");
            return 1;
        }

        double correnteDoCircuitoEmA = tensaoNoCircuitoEmV / resistenciaEquivalente;

        if (correnteDoCircuitoEmA < CORRENTE_MAXIMA_DO_FUSIVEL_EM_AMPERE)
        {
            double tensaoDeR1EmV = correnteDoCircuitoEmA * r1EmOhm;
            double tensaoDeR2EmV = correnteDoCircuitoEmA * r2EmOhm;
        }
    }
    return 0;
}
