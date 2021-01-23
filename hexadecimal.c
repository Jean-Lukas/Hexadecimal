#include <stdio.h>

int main(void)
{
	int opcao, valor;
	printf("Converter: \n");
	printf("1: Decimal para hexadecimal\n");
	printf("2: Hexadecimal para decimal\n");
	printf("Informe sua opção -> ");
	scanf("%d", &opcao);

	switch(opcao)
	{
		case 1:
			printf("Digite um número em decimal ->");
			scanf("%d", &valor);
			printf("Decimal %d, hexadecimal %x", valor, valor);
			break;
		case 2:
			printf("Digite um número em hexadecimal -> ");
			scanf("%x", &valor);
			printf("Hexadecimal -> %x, Decimal -> %d", valor, valor);
			break;
		default:
			printf("Número digitado inválido");
	}	
}
