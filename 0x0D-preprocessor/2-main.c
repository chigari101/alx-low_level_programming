#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	int c;

	c = __FILE__();
	putchar(c);
	c = __FILE__();

	return (0);
}
