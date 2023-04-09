#include <stdio.h>

int main()
{
	int j = 1;

	while(j+=2,j<11)
	{
		printf("%d ",j);
	}
	printf("\n");

	/*
		loop infinito
		while(1){  
			//statement  
		}  
	*/

	return 0;
}