#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: allocate memory for an array by byte.
 * @size: memory size.
 *
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (size <= 0 || nmemb <= 0)
		return ('\0');
	ptr = malloc(sizeof(nmemb * size);
	if (ptr == NULL)
		return ('\0');
	nmemb *= size;
	while (nmemb--)
		ptr[nmemb] = 0;
	return ((void *)ptr);
}
