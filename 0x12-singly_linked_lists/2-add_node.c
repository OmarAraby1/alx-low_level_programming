#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to to the head of list
 * @str: string added
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	ptr = strdup(str);
	if (!ptr)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	new->str = dup;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
