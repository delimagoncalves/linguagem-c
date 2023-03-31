#include <stdio.h>
//Em C devemos utilizar o arquivo de cabeçaljo stdbool.h
#include <stdbool.h>

int main(){

	bool x = false;

	if(x == true)
	{
		printf("X é verdadeiro.\n");
	}else
	{
		printf("X é falso.\n");
	}

	return 0;
}