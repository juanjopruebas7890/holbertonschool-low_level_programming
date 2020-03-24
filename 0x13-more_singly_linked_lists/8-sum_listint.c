#include "lists.h"
/**
 * sum_listint - Will return the nth node of the list.
 * @head: Variable.
 * Return: current.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *c;

	c = head;

	while (c != NULL)
	{
		i = i + c->n;
		c = c->next;
	}
	return (i);
}
