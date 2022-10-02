#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of argument int the program.
 * @argv: An array of pointer in the program.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", --argc);

	return (0);
}
