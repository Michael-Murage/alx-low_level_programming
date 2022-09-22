#include "main.h"
/**
 * cap_string - capitalizes all characters of a string
 * after ,;.!?"(){} space tab and new line
 * @s: pointer to string being manipulated
 * Return: resultant capitalized char*
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		s[i] == '}' || s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
	}
	return (s);
}
