#include <stdio.h>

int main(){

	int a = 6, b = 14;
	printf("A saída do operador bit a bit a&b é: %d\n",a&b);

	a = 23, b = 10;
	printf("A saída do operador bit a bit a|b é: %d\n",a|b);

	a = 12, b = 10;
	printf("A saída do operador bit a bit a^b é: %d\n",a^b);

	a = 23;
	printf("A saída do operador bit a bit ~a é: %d\n",~a);

	a = 5;
	printf("A saída do operador bit a bit a<<2 é: %d\n",a<<2);

	a = 7;
	printf("A saída do operador bit a bit a>>2 é: %d\n",a>>2);


	return 0;
}