#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op1;
	char op2;

	do
	{
		printf("(1) Imprime\"Olá Mundo\"\n(2) Imprime \"Linguagem c\"\n(3) Sair.\n");
		scanf("%d", &op1);

		switch(op1)
		{
			case 1:
				printf("Olá Mundo.\n\n\n");
				break;
			case 2:
				printf("Linguagem C.\n\n\n");
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Digite uma opção válida!\n\n");
				break;
		}

		printf("Deseja continuar?(s) ou (n): ");
		scanf("%c", &op2);
		
	}while(op2 != 'n');

	return 0;
}