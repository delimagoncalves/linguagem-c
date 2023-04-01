#include <stdio.h>

int main(){
	int idade,b,a=5;
    printf("Digite sua idade: ");  
    scanf("%d",&idade);
    (idade>=18) ? (printf("Pode dirigir\n")) : (printf("Não pode dirigir\n"));

	//Outro exemplo de uso do operador ternário
	b = (a == 5) ? (3) : (4);
	printf("Valor de b: %d\n",b);

    return 0;
}