#include <stdio.h>

void print_number(int num);
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of argument int the program.
 * @argv: An array of pointer in the program.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print_number(--argc);
	printf("\n");

	return (0);
}
/**
 * print_number - prints number with _putchar
 * @num: inter, number to be printed
 *
 * Return: void
 */
void print_number(int num)
{
	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
