#include <stdio.h>
//Em C devemos utilizar o arquivo de cabeçaljo stdbool.h
#include <stdbool.h>

int main(){

	bool x = false;
	bool y = true;

	printf( "O valor de x&&y é %d" , x&&y);
	printf( "\nO valor de x||y é %d" , x||y);
	printf( "\nO valor de !x é %d" , !x);

	return 0;
}