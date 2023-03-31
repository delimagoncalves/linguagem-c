#include <stdio.h>
//Em C devemos utilizar o arquivo de cabeçaljo stdbool.h
#include <stdbool.h>

int main(){

	bool b[4] = {false,true,true,false};

	for(int i = 0; i < 4; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}