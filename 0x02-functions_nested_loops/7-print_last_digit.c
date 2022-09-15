#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer being checked
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	else
	{
		a = n % 10;
		if (a < 0)
		{
			a = -a;
		}
	}
	return (a);
}
