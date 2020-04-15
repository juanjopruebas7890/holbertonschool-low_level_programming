#include "lists.h"
/**
 * find_listint_loop - will find a loop in a linked list
 * @head: variable
 * Return: 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *c;

	for (; head; head = head->next)
	{
		for (i = head->next, c = head->next->next; i && c;)
		{
			if (i == head || c == head)
			{
				return (head);
			}
			if (i == c)
			{
				break;
			}
			if (!i->next || !c->next->next)
			{
				return (NULL);
			}

			i = i->next;
			c = c->next->next;
		}
	}
	return (NULL);
}
