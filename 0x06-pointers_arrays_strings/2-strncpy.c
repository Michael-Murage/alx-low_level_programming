#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string.
 * @dest: address of destination (buffer)
 * @src: address of source string
 * @n: size delimiter
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int size = strlen(src);
	int j, k;

	while (src[i] != '\0')
	{
		i++;
	}
	if (n > size)
	{
		for (j = 0; j < size; j++)
		{
			dest[j] = src[j];
		}
		for (k = j; k < n; k++)
		{
			dest[k] = '\0';
		}

	}
	else if (n < size)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}

	}
	else if (n == size)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';

	}

	return (dest);
}
