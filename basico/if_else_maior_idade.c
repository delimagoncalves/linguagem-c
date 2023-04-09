#include <stdio.h>

int main()
{
	int idade;
	printf("Digite um número: ");
	scanf("%d",&idade);

	//Utilizand if e else
	if(idade >= 18)
	{
		printf("Vocẽ já é maior de idade.\n");
	}

	else
	{
		printf("Você não é maior de idade.\n");
	}
	return 0;
}