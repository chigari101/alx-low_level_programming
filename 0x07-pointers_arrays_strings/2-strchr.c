#include "main.h"

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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
