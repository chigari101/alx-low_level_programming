#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be searched
 * @c: char to be located
 *
 * Retrun: if c is not found - NULL, if it is found - a pointer
 * to the first occurrence.
 */
char *_strchr(char *s, char c)
{
	while (*s >= 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
