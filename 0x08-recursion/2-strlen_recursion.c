#include "main.h"
/**
 * strlen_recursion - returns the length of a string.
 * @s: address to char being calculated
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
