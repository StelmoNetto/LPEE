#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    printf("=== POTENCIACAO ===\n");
    printf("pow(2,3)      = %.0f\n", pow(2, 3));
    printf("sqrt(25)      = %.0f\n", sqrt(25));
    printf("cbrt(27)      = %.0f\n", cbrt(27));
    printf("hypot(3,4)    = %.0f\n\n", hypot(3, 4));

    printf("=== ARREDONDAMENTO ===\n");
    printf("ceil(3.2)     = %.0f\n", ceil(3.2));
    printf("floor(3.8)    = %.0f\n", floor(3.8));
    printf("round(3.5)    = %.0f\n", round(3.5));
    printf("trunc(3.9)    = %.0f\n\n", trunc(3.9));

    printf("=== MODULO E SINAL ===\n");
    printf("fabs(-12.5)   = %.1f\n", fabs(-12.5));
    printf("copysign(3,-1)= %.0f\n", copysign(3, -1));
    printf("fdim(8,5)     = %.0f\n\n", fdim(8, 5));

    printf("=== RESTO E PARTES ===\n");
    printf("fmod(7,2)     = %.0f\n", fmod(7, 2));
    printf("remainder(7,2)= %.0f\n", remainder(7, 2));

    double inteira;
    double frac = modf(3.14, &inteira);

    printf("modf(3.14) -> inteira=%.0f fracionaria=%.2f\n\n",
        inteira, frac);

    printf("=== EXPONENCIAIS E LOGARITMOS ===\n");
    printf("exp(1)        = %.4f\n", exp(1));
    printf("exp2(3)       = %.0f\n", exp2(3));
    printf("log(e)        = %.0f\n", log(exp(1)));
    printf("log10(100)    = %.0f\n", log10(100));
    printf("log2(8)       = %.0f\n\n", log2(8));

    printf("=== TRIGONOMETRIA ===\n");
    printf("sin(pi/2)     = %.0f\n", sin(M_PI / 2));
    printf("cos(0)        = %.0f\n", cos(0));
    printf("tan(pi/4)     = %.0f\n", tan(M_PI / 4));
    printf("asin(1)       = %.2f\n", asin(1));
    printf("acos(1)       = %.2f\n", acos(1));
    printf("atan(1)       = %.2f\n", atan(1));
    printf("atan2(1,1)    = %.2f\n\n", atan2(1, 1));

    printf("=== HIPERBOLICAS ===\n");
    printf("sinh(1)       = %.4f\n", sinh(1));
    printf("cosh(1)       = %.4f\n", cosh(1));
    printf("tanh(1)       = %.4f\n", tanh(1));
    printf("asinh(1)      = %.4f\n", asinh(1));
    printf("acosh(2)      = %.4f\n", acosh(2));
    printf("atanh(0.5)    = %.4f\n\n", atanh(0.5));

    printf("=== COMPARACAO ===\n");
    printf("fmax(3,8)     = %.0f\n", fmax(3, 8));
    printf("fmin(3,8)     = %.0f\n", fmin(3, 8));
    printf("isgreater(5,2)= %d\n", isgreater(5, 2));
    printf("isless(5,2)   = %d\n\n", isless(5, 2));

    printf("=== CLASSIFICACAO ===\n");
    printf("isfinite(1.0) = %d\n", isfinite(1.0));
    printf("isinf(INFINITY)= %d\n", isinf(INFINITY));
    printf("isnan(NAN)    = %d\n", isnan(NAN));
    printf("signbit(-5.0) = %d\n", signbit(-5.0));
	printf("fpclassify(0.0)= %d\n", fpclassify(0.0));

    return 0;
}