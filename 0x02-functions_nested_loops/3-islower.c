#include "main.h"
/**
 * _islower - fuction to check for the lower character
 * @c:	is the int that is used for the argument of the function
 * Return: 0
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
