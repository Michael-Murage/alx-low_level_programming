#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: starting from this point
 * Return: no return value
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			printf("%d, ", res);
		}
		printf("\n");
	}
}
