#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: pointer to array being printed
 * @n: number of items being printed
 */
void print_array(int *a, int n)
{
	int i;

	if (*(a + 1) != '\0')
	{
		printf("%d", *a);
	}

	for (i = 1; i < n; i++)
	{
		if (i != '\0')
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");
}
