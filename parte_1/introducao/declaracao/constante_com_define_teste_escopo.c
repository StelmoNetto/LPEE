int main() 
{
	//Comente a próxima linha para testar a visibilidade da macro VALOR_INICIAL fora do bloco.
	//int valor = VALOR_INICIAL; //VALOR_INICIAL não é visível aqui, pois foi definido dentro do escopo do bloco a seguir.
	//Escopo
	{
#define VALOR_INICIAL 10
		int valor = VALOR_INICIAL;
	}

	int valor = VALOR_INICIAL; //VALOR_INICIAL é visível aqui, pois a macro não tem escopo de bloco e é visível em todo o arquivo após sua definição.
	
	return 0;
}