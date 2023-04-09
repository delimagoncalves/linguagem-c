#include <stdio.h>

int main(){

	int a,b,c;

	printf("Digite o primeiro número: ");
	scanf("%d", &a);

	printf("Digite o segundo número: ");
	scanf("%d", &b);

	printf("Digite o terceiro número: ");
	scanf("%d", &c);

	printf("Você digitou: A:%d\tB:%d\tC:%d\n",a,b,c);
	printf("Verificando.............\n");

	if(a > b)
	{
		if(a > c)
		{
			printf("A com valor %d é o maior número\n",a);
		}
	}

	if(b > a)
	{
		if(b > c)
		{
			printf("B com valor %d é o maior número\n",b);
		}
	}

	if(c > a)
	{
		if(c > b)
		{
			printf("C com valor %d é o maior número\n",c);
		}
	}

	return 0;
}