#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space,
 * in memory which contains a copy of the string given as a parameter.
 * @str: string.
 *
 * Return: pointer of an array of characters.
 */
char *_strdup(char *str)
{
	char *strdup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strdup = (char *)malloc(sizeof(char) * (i + 1));

	if (strdup == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strdup[j] = str[j];

	return (strdup);
}
