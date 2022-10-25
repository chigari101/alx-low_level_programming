#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a  new node at the end of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer to add as value of the new node.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *node;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = node;
		}
	}
	return (node);
}
