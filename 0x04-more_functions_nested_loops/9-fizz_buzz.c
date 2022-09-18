

#include <stdio.h>
/**
* main - prints 1-100, fizz for 3, buzz for 5, fizzbuzz for multiples of 3, 5
*
* Return: Always 0
*
*/
int main(void)
{
	int i;

	i = 1;

	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
