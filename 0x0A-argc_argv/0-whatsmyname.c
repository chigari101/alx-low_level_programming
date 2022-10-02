#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: number of argument in the program.
 * @argv: An array of pointer in the program.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
