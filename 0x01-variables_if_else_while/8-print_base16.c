#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: always 0 (success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
