#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of argument int the program.
 * @argv: An array of pointer in the program.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
