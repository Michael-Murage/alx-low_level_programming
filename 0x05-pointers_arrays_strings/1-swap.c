#include "main.h"
/**
 * swap_int- swaps the values of two integers.
 * @a: parameter acting as exchanger
 * @b: parameter acting as exchangee
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*b = x;
	*a = y;
}
