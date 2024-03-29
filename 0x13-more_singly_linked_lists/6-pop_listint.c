#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the head of the linked list.
 * Return: the head's node data if the list is not empty.
 *	   0 otherwise.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
