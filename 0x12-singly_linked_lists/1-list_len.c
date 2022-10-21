#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list_t list.
 * @h: the linked list
 *
 * Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		nodes_num++;
		h = h->next;
	}

	return (nodes_num);
}
