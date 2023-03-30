#include <stdio.h>

int main(){
    //Declaração de variável com escopo global
    int n1 = 10;
    float n2 = 10.5;
    char letra = 'A';
    double n3 = 10.66;

    void function1(){
        //Escopo da variável com escopo local
        int x =10;
        int static y = 11;//Variável estática, retem seu valor entre chamada das funções

        x=x+1;
        y=y+1;
        printf("%d,%d\n",x,y);

    }

    //Verificando a diferença da variável estática
    function1();
    function1();

    return 0;
}