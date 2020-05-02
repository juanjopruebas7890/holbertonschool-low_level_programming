#include "lists.h"

/**
 * get_dnodeint_at_index - Will return the nth node of the list.
 * @head: Variable.
 * @index: Variable
 * Return: c.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *c;

	c = head;

	if (c == NULL)
	{
		return (NULL);
	}

	while (c != NULL)
	{
		if (i == index)
		{
			break;
		}
		i++;
		c = c->next;
	}
	return (c);
}
