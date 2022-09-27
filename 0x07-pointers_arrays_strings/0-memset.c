#include "main.h"

/**
 * _memset - fills a given amount of bytes to a value at an address
 * pointed to by @s with a constant byte @c.
 * @s: A pointer to the memory location to be filled.
 * @b: character to write to memory.
 * @n: number of bytes to write
 *
 * Retrun: A pointer to the filled the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
