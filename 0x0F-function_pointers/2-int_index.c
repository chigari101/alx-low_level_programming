#include "function_pointers.h"

/**
 * int_index - Executes a function as a parameter
 * on each element of an array
 * @array: An array of paramters (values) to be passed to @action
 * @size: Size/length of @array
 * @cmp: Pointer to a function
 *
 * Return: if no element matches return -1 otherwise return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
