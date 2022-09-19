#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string being counted
 * Return: string length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
