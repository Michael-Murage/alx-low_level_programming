#include <stdio.h>
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof('c'));
	printf("Size of a int: %d byte(s)\n", sizeof(3));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a long float: %d byte(s)\n", sizeof(float));
}