#include <stdio.h>
/**
 * main - prints all alphabets except q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
