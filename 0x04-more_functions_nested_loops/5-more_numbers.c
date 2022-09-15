#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: no return value
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
