#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to check
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int num = n * -1;

		_putchar(num);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
