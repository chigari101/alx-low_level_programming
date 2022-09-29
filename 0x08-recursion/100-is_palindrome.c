#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares characters of the string.
 * @s: string
 * @num1: smallest iterator
 * @num2: biggest iterator.
 * Return: 0.
 */
int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string.
 * Retrun: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
