#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - Adds a node to a single linked list
 * @head: A pointer to the pointer to the first element.
 * @n: The integer to initialize with.
 * Return: The address of the item just added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
