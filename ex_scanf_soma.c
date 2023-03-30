#include <stdio.h>

int main()
{
    int n1=0,n2=0,resultado=0;

    printf("Digite o primeiro numero: ");
    scanf("%d" ,&n1);
    printf("Digite o segundo numero: ");
    scanf("%d" ,&n2);

    resultado=n1+n2;
    
    printf("O resultado da soma é: %d\n",(resultado));
    return 0;
}
