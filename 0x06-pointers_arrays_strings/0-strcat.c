#include "main.h"

/**
 * _strcat - function that concatenates two strings pointed by @src,
 * appends the src string to the dest string,
 * @dest: overwriting the terminating null byte (\0) at the end of dest
 * @src: to be appended to @dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
