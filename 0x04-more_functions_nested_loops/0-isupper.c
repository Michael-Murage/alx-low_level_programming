#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: integer being checked
 * Return: 1 if true 0 if otherwise.
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
