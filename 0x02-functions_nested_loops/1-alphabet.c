#include "main.h"

/**
 * main - Prints_alphabet in a lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		print_alphabet();
	}

	_putchar('\n');

	return (0);
}
