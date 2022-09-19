#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * to stdout.
 * @str: pointer to string being output
 */
void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	while (len > 0)
	{
		str--;
		_putchar(*str);
		len--;
	}
	
	_putchar('\n');
}
