#include "main.h"
/**
 * _islower - checks for lowercase character.
 * int c - what is checked
 * Return: 1 is a lowercase leetter or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
