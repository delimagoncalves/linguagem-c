#include <stdio.h>

int func()
{
    //Variável estática
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d",func());
    printf("\n%d\n",func());
    return 0;
}
