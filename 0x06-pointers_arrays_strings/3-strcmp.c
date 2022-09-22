#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer for the first string
 * @s2: pointer for the second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != \'0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
