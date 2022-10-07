#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		
		if (!argv[1] || !argv[2] || !atoi(argv[1]) || !atoi(argv[2]))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}

