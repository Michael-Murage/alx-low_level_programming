#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
