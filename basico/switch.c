#include <stdio.h>

int main()
{
	char l = 0;

	printf("Digite uma letra: ");
	scanf("%c",&l);

	switch(l){
		case 's':
			printf("S de sapo.\n");
			break;
		case 'a':
			printf("A de abelha.\n");
			break;
		case 'b':
			printf("B de bola.\n");
			break;
		case 'c':
			printf("C de casa.\n");
			break;
		default:
			printf("Letra não encontrada.\n");
			break;
	}
	
	return 0;
}