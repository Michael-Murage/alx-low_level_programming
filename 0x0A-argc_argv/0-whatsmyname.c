#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: length of argv array
 * @argv: array containing arguments passed to program
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
