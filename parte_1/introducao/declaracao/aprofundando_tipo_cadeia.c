int main()
{
	char cadeia[] = "Olá, mundo!"; // A string "Olá, mundo!" tem 12 caracteres, incluindo o caractere nulo '\0' no final
	cadeia[5] = 'M'; // Modifica o caractere na posição 5 da string para 'M', resultando em "Olá, Mundo!"

	const char cadeiaImutavel[24] = "Não pode ser modificada"; // A string é declarada como constante, portanto não pode ser alterada
	// A tentativa de modificar a cadeiaImutavel resultaria em um erro de compilação
	//cadeiaImutavel[23] = '!'; // Isso causaria um erro de compilação, pois cadeiaImutavel é constante

	char outroCadeia[3]; // Declaração de uma nova cadeia de caracteres com espaço para 3 caracteres
	outroCadeia[0] = 'O'; // Atribui o caractere '0' à posição 0 da nova cadeia
	outroCadeia[1] = 'i'; // Atribui o caractere 'i' à posição 1 da nova cadeia
	outroCadeia[2] = '\0'; // Atribui o caractere '\0' à posição 2 da nova cadeia para indicar o final da string
	outroCadeia[2] = 0; // Atribui o valor 0 à posição 2 da nova cadeia é equivalente a '\0' e indica o final da string

	return 0;
}