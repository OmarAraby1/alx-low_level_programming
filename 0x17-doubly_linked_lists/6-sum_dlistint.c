#include "lists.h"
/**
 * sum_dlistint - sums the nodes
 * @head: the list
 * ReTURN: THE SUM
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head->next = head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
