#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		i++;

		temp = temp->next;
	}
	return (i);
}
