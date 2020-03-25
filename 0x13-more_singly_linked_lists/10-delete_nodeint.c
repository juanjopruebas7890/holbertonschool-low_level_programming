#include "lists.h"
/**
 * delete_nodeint_at_index - Will delete a node at index.
 * @head: Variable.
 * @index: Variable.
 * Return: current.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *temporal;
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
				temporal = c;
				temporal = temporal->next;
				c->next = temporal->next;
				free(temporal);
				return (1);
			}
			c = c->next;
		}
	}
	return (-1);
}
