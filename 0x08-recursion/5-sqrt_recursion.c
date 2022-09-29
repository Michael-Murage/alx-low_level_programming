#include "main.h"
int actual_sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: number to find square root of
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - recurses to find the natural root
 * @n: number in question
 * @i: iterator
 * Return: the natural root of n
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt(n, i + 1));
}
