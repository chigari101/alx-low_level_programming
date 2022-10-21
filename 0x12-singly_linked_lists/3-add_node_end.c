#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int Kabiru = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[Kabiru])
		Kabiru++;

	new_node->len = Kabiru;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}

	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
