#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at the index
 * @head: the doubly linked list
 * @index: index of the node to return
 * Return: the node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	for (; index != 0 ; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
