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
	printf("%d\n", argc - 1);
	return (0);
}
