#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end
 * @head: the doubly linked list
 * @n: the node to add
 * Return: The Address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new_node;
	new_node->prev = aux;
	return (new_node);
}
