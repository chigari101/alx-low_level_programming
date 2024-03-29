#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
