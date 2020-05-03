#include "lists.h"
/**
 * delete_dnodeint_at_index - Will delete a node at index.
 * @head: Variable.
 * @index: Variable.
 * Return: 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c, *t;
	unsigned int p = 0;

	c = *head;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}
	else
	{
		for (p = 0; c != NULL; p++)
		{
			if (p == index - 1)
			{
				t = c;
				t = t->next;
				c->next = t->next;
				free(t);
				return (1);
			}
			c = c->next;
		}
	}
	return (-1);
}
