#include<stdio.h>

int main(){

	int n = 0;

	printf("Digite um número entre 0 e 100: ");
	scanf("%d",&n);

	if(n == 10)
	{
		printf("número é igual a 10.\n");
	} 
	else if(n == 50)
	{
		printf("número é igual a 50.\n");
	}
	else if(n == 100){
		printf("número é igual a 100.\n");
	}
	else{
		printf("número não é igual a 10, 50 ou 100.\n");
	}
	return 0;  
}    