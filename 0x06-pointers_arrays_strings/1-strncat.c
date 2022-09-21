#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 * @dest: added to
 * @src: being added
 * @n: bytes delimiter
 * Return - char* 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int a = sizeof(src);

	while (dest[i] != '\0')
	{
		i++;
	}
	if (n < a)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
		}
	}else if (n >= a)
	{
		j = 0;
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
