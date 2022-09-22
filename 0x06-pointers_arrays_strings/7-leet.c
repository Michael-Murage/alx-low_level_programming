#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer to string being encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	char a[] = "AEOTL";
	char b[] = "aeotl";
	char c[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
			}
		}
	}
	return (s);
}
