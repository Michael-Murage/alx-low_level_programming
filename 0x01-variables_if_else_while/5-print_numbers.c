#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: returns 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf('\n');
	return (0);
}
