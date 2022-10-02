#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line in the program.
 * @argv: An array that contains the program command line argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int amount, cents = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	amount = atoi(arfv[1]);

	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else if (amount >= 1)
			amount -= 1;
		cents += 1;
	}
	printf("%d\n", cents);
	return (0);
}
