#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of an array.
 * @c: character storage.
 *
 * Return: pointer of an arrray of characters.
 */
char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ac = malloc(sizeof(c) * size);

	if (ac == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ac[i] = c;

	return (ac);
}
