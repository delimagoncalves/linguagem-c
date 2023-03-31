#include <stdio.h>
/*
Na linguagem de programação C , 
uma variável de caractere não contém um valor de caractere em si,
mas sim o valor ascii da variável de caractere.
*/

int  main()  
{  
    int i;    // declaração de variável

    printf("\tTABELA ASCII");
    for(i = 0; i <= 255; i++)
    {
        printf("%c -> %d\n",i,i);
    }

    return  0;  
}
