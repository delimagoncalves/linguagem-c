#include <stdio.h>

int main()
{
	int n = 0;
	printf("Digite um número: ");
	scanf("%d",&n);

	//Utilizand if 
	if(n % 2 == 0)
	{
		printf("%d é par.\n",n);
	}

	if(n %2 != 0)
	{
		printf("%d não é par.\n",n);
	}
	return 0;
}