#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count in the program.
 * @av: argument vector on the program.
 *
 * Return: pointer of an array of characters.
 */
char *argstostr(int ac, char **av)
{
	char *atos;
	int i, j, k, l;


	if (ac == 0)
		return (NULL);
	for (i = j = 0; j < ac; j++)
	{
		if (av[j] == NULL)
			return (NULL);

		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	atos = malloc((i + 1) * sizeof(char));
	if (atos == NULL)
	{
		free(atos);
		return (NULL);
	}
	for (j = k = l = 0; l < i; k++; l++)
	{
		if (av[j][k] =='\0')
		{
			atos[l] = '\n';
			j++;
			l++;
			k = 0;
		}
		if (l < i - 1)
			atos[l] = av[j][k];
	}
	atos[l] = '\0';
	return (atos);
}
