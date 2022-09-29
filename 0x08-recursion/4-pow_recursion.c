#include "main.h"
/**
 * _pow_recursion - returns the power of one number to another
 * @x: base
 * @y: exponent
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
