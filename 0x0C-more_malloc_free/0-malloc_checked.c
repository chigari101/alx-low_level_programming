#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer size to be allocated
 * Return: return pointer to the allocated memory.
 * if it fails, return 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mc;

	mc = malloc(b);
	if (mc == NULL)
	{
		exit(98);
	}
	return (mc);
}
