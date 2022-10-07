#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: length of argv array
 * @argv: array containing arguments passed to program
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int tot, two, one;

	if (argc == 3)
	{
		two = atoi(argv[2]);
		one = atoi(argv[1]);
		tot = one * two;
		printf("%d\n", tot);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
