#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer to a pointer set.
 * @to: pointer targeting address.
 * Return: 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
