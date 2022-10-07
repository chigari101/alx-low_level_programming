#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: function parameter
 * @max: function parameter
 * Return: the pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(*ar));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		ar[i] = min + i;
	return (ar);
}
