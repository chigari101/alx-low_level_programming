#include "main.h"

/**
 * _strlen - function that return the length of a string.
 * @str: string
 * Return: length
 */
void _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
