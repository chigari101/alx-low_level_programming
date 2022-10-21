#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
