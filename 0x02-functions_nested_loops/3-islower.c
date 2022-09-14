#include "main.h"
/**
 * _islower - checks for lowercase character.
 * Return: returns 1 if true, 0 if false
 * c is an integer being tested whether letter or number
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
