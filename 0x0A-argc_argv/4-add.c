#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers nd Print the result,
 * followed by a new line.
 * @argc: number of argument in the program.
 * @argv: An array of pointer in the program.
 *
 * Return: If one of the number contains symbols that are not digits - 1
 * else return 0.
 */
int main(int argc, char *argv[])
{
	int a, i, j;

	a = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
