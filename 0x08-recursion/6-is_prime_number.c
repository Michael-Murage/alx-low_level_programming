#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - returns whether or not not a number is prime
 * @n: number in question
 * Return: 1 or 0 depending on true or false
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
/**
 * prime - recurses to find whether n is prime
 * @n: number in question
 * @i: iterator
 * Return: 1 or 0 depending on true or false
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > 0 && n % i == 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
