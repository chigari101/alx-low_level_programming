#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed.
 *
 * Return: pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != \'0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	return (str);
}
