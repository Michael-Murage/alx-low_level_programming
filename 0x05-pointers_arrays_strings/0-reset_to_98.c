#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as
 * parameter and updates the value it points to
 * to 98.
 * @n: The pointer taken as a parameter
 * Return: no return value
 */
void reset_to_98(int *n)
{
	int num = 98;

	*n = num;
}