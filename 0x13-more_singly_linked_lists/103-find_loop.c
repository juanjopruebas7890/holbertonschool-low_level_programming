#include "lists.h"
/**
 * find_listint_loop - will find a loop in a linked list
 * @head: variable
 * Return: 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c = head, *i;

	if (c == NULL)
	{
		return (0);
	}

	if (c == c->next)
	{
		return (c);
	}

	while (c != NULL)
	{
		i = head;
		c = c->next;
		while (i != c && c != NULL)
		{
			i = i->next;
			if (c->next == c)
			{
				return (c);
			}
			if (c->next == i)
			{
				return (i);
			}
		}
	}
	return (c);
}

