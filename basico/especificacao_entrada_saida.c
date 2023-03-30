#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Imprimindo valores inteiros com %d
    int a=10,b=20;
    printf("Valor inteiro de a -> %d\n",a);
    printf("Valor inteiro de b -> %d\n",b);

    //Imprimindo apenas valores inteiros positivos
    a=10,b=-20;
    printf("Valor inteiro de a -> %u\n",a);
    printf("Valor inteiro de b -> %u\n",b);//Não será impresso porque seu valor é negativo

    //Imprimindo valor octal e inteiro correspondente
    a=0100;
    printf("Valor octal de a é: %o\n",a);
    printf("valor inteiro de a é: %d\n",a);

    //Imprimindo valor hexadecimal e inteiro correspondente
    a=0xA;
    printf("Valor hexadecimal de a -> %x\n",a);
    printf("Valor hexadecimal de a em maiusculo -> %X\n",a);
    printf("Valor inteiro de a: %d\n",a);

    //Imprimindo valor decimal
    float f=10.33333;
    printf("Valor decimal: %f\n",f);

    //Imprimindo valor exponencial
    f=10.33333;
    printf("Valor decimal: %e\n",f);

    //Imprimindo valor decimal com a mesma precisão
    f=10.3;
    printf("Valor decimal com precisão: %g\n",f);

    //Imprimindo endereço de memória em hexa
    printf("Valor do endereço de f em hexa: %p\n");

    //Imprimindo caracter
    char letra = 'b';
    printf("Caracter da variavel: %c\n",letra);

    //Imprimindo String
    printf("%s","String em C\n");

    //Delimitando espaço a esquerda
    int n = 10;
    printf("%8d\n",n);
    printf("%-8d\n",n);

    //Preencher espaço vazio
    int z = 10;
    printf("%08d\n",z);

    //Especificando a precisão
    double d = 12.3245;
    printf("%.2f\n",d);
    return 0;
}