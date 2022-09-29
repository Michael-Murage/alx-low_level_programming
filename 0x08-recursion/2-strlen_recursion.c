#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: address to char being calculated
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int tot = 0;

	if (*s)
	{
		tot++;
		tot += _strlen_recursion(s + 1);
	}
	return (tot);
}
