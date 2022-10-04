#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: pointer of array of characters.
 */
char *str_concat(char *s1, char *s2)
{
	char *strcat;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strcat = malloc(sizeof(char) * (i + j + 1));

	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strcat[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		strcat[k] = s2[j];

	return (strcat);
}
