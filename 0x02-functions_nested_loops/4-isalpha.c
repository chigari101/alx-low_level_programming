#include "main.h"

/**
 * _isalpha - function that checks alphabetic character.
 *
 * @c: is the int that should be used for the argument of the function.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
