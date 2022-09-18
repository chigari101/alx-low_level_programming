#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the numbers from 1 to 100, followed by new line.
 * but for multiples of three points Fizz instead of the numbers.
 * and for the multiples of five prints Buzz
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)

		{
			printf(" Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d" i);
		}
	}
	printf("\n");

	return (0);
}
