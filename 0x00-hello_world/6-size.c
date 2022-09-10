#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int inttype;
	float floattype;
	double doubletype;
	char chartype;

	printf("Size of int: %zu bytes\n", sizeof(inttype));
	printf("Size of float: %zu bytes\n", sizeof(floattype));
	printf("Size of double: %zu bytes\n", sizeof(doubletype));
	printf("Size of char: %zu byte\n", sizeof(chartype));

	return (0);
}
