int main()
{
	const int TAMANHO = 5;
	
	//int vetor[TAMANHO]; //TAMANHO não é uma constante em tempo de compilação

	enum {
		LARGURA_TELA = 800,
		ALTURA_TELA = 600,
		AREA_TELA = LARGURA_TELA * ALTURA_TELA //Admitem expressões aritméticas
	}; //; obrigatório

	enum
	{
		OPCAO_ABRIR,
		OPCAO_EXIBIR,
		OPCA_SAIR,
		NUMERO_DE_OPCOES
	};

	enum DIAS
	{
		SEGUNDA = 2,
		TERCA,
		QUARTA,
		QUINTA,
		SEXTA,
		SABADO,
		DOMINGO = 1
	} diaDePizza; //Variável do tipo enum DIAS

	enum DIAS hoje = QUINTA; //Variável do tipo enum DIAS

	short int dia = hoje; //Conversão implícita de enum para inteiro

	enum DIAS ontem = 4; //Conversão implícita de inteiro para enum
}