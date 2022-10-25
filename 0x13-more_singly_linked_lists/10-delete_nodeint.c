#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: The first element of the list.
 * @index: The position of the node to delete.
 * Return: 1 if failure. -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	temp = *head;
	while ((temp->next != NULL) && (i + 1 < index))
	{
		temp = temp->next;
		i++;
	}
	if (i + 1 < index)
	{
		temp2 = temp->next;
		temp->next = temp->next->next;
		free(temp2);
		return (1);
	}
	return (-1);
}
