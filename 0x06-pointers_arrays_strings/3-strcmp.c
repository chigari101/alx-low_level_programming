#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer for the first string
 * @s2: pointer for the second string
 *
 * Return: if str1 < str2, negative difference
 * if str1 == str2, 0
 * if str1 > str2 positive difference.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2 && *s1 == *s2)

	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
