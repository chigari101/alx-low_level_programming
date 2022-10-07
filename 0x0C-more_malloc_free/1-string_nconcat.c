#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string.
 * @n: number.
 *
 * Return: return newly allocated memory space
 * NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		if (*s1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else
		{
			ptr[i] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
