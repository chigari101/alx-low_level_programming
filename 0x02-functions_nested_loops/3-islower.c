#include "main.h"

/**
 * _islower - check the code for lowercase
 *
 * @c: is the int should be used for the argument of the function.
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
