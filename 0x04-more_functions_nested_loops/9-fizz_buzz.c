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
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
