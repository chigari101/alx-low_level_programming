#include "main.h"

/**
 * prime_num - figure out if the input integer is a prime number.
 * @n: input int
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if nis not the prime number.
 */
int prime_num(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(n, c + 1));
}
/**
 * is_prime_number - if the input integer is a prime number
 * @n: input int
 * Return: 1 if n is a prime number. 0 if nis not the prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	return (prime_num(n, 2));
}
