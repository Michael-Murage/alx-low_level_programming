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

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = j * i;
				if (j == 0)
				{
					_putchar(res + '0');
				} else if (res < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				} else if (res >= 10 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				} else if (res >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
