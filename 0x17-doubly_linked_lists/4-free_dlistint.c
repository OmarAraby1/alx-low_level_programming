#include "lists.h"
/**
 * free_dlistint - free the elements of the list
 * @head: the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	stack_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
