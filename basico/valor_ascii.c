#include <stdio.h>
/*
Na linguagem de programação C , 
uma variável de caractere não contém um valor de caractere em si,
mas sim o valor ascii da variável de caractere.
*/

int  main()  
{  
    char  ch;    // declaração de variável  
    printf( "Digite um caractere: " );  
    scanf( "%c" ,&ch);  // entrada do usuário  
    printf( "\nO valor ascii da variável ch é: %d\n" , ch);


	


    return  0;  
}  