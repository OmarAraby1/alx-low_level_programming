#include "lists.h"
/**
 * dlistint_len - counts the length of doubly linked list
 * @h: the dlistint_t list to print
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
