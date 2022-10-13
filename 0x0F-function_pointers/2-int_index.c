#include "function_pointers.h"

/**
 * int_index - Executes a function as a parameter
 * on each element of an array
 * @array: An array of paramters (values) to be passed to @action
 * @size: Size/length of @array
 * @action: Pointer to a function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
