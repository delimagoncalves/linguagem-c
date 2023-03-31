#include <stdio.h>

int main()
{
    int soma = 0, i = 0;
    char nome_personagem[20];

    printf("Digite o nome do personagem: ");
    scanf("%s", &nome_personagem);

    while(nome_personagem[i] != '\0')
    {
        printf("O valor ASCII do caracter %c é %d.\n",nome_personagem[i],nome_personagem[i]);
        soma+=nome_personagem[i];
        i++;
    }

    printf("A soma do valor ASCII da string é: %d\n",soma);
    return 0;
}