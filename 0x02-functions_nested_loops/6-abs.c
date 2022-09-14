#include "main.h"

/**
 * _abs - function that determines the absolute value of an integer.
 *
 * @c: the int should be used for the argument of the function.
 *
 * Return: Always 0.
 */
int _abs(int c)
{

	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
