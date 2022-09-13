#include <stdio.h>
/**
 * main - prints all alphabets except q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			putchar("\n");
		}
	return (0);
}
