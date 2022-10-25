#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a  new node at a given position.
 * @head: The first element of the list.
 * @idx: The position of insertion.
 * @n: The data of the new node.
 * Return: The address of the new node if success.
 *	   NULL otherwise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		if (idx == 0)
		{
			node->next = *head;
			head = &node;
		}
		else
		{
			temp = *head;
			while ((temp != NULL) && (i < idx))
			{
				temp = temp->next;
				i++;
			}
			if (i < idx)
			{
				node->next = temp->next;
				temp->next = node;
			}
		}
	}
	return (node);
}
