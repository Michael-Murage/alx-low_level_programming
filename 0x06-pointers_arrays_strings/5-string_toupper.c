#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @str: pointer to string being manipulated
 * Return: uppercased string
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
