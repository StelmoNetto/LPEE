#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[80], s2[80];
    
    printf("Entre com a string 1\n");
    fgets(s1, sizeof(s1), stdin); //Leitura da string s1 do fluxo do teclado
    s1[strcspn(s1, "\n")] = '\0'; // Remove o '\n' que o fgets traz junto
    
    printf("Entre com a string 2\n");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; // Remove o '\n' do segundo fgets

    printf("comprimentos: %zu %zu\n", strlen(s1), strlen(s2));
    
    if (!strcmp(s1, s2))
        printf("As strings sao iguais\n");
        
    // Antes de concatenar, garante-se que s1 possui espaço suficiente para s2
    strcat(s1, s2);
    printf("As strings concatenadas: %s\n", s1);
    
    strcpy(s1, " Isso e um teste\n");
    s1[sizeof(s1) - 1] = '\0';
    printf("%s", s1);
    
    if (strchr("alo", 'o'))
        printf("o esta em alo\n");
        
    if (strstr("ola aqui", "ola"))
        printf("ola encontrado\n");

    return 0;
}
