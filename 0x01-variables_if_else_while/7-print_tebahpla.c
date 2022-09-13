#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'z';

	for (ch; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
