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
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
