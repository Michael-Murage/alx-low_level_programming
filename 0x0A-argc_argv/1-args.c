#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: length of argv array
 * @argv: array containing arguments passed to program
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
