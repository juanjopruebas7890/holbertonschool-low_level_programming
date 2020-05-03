#include "lists.h"

/**
 * sum_dlistint - Will return the nth node of the list.
 * @head: Variable.
 * Return: i.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *c;

	c = head;

	while (c != NULL)
	{
		i = i + c->n;
		c = c->next;
	}
	return (i);
}
