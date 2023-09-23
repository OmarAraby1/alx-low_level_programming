#include "lists.h"
/**
 * add_dnodeint - adds new node at beginning
 * @head: the doubly linked list
 * @n: the node to add
 * Return: The Address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (aux)
	{
		aux->prev = new_node;
	}
	else
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (&new_node);
}
