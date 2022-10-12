#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @p: pointer to the function that prints name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		f(name);
}
