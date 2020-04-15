#include "lists.h"
const listint_t *loop(const listint_t *head);
/**
 * print_listint_safe - print a list
 * @head: variable
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	int i = 0;
	const listint_t *t, *e;

	if (head == NULL)
	{
		return (node);
	}

	t = head;
	e = loop(head);
	do {
		if (t == e)
		{
			if (!i)
			{
				i++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				break;
			}
		}
		printf("[%p] %d\n", (void *)t, t->n);
		node++;
		t = t->next;
	} while (t);

	return (node);
}
/**
 * loop - will find a loop
 * @head: variable
 * Return: 0
 */
const listint_t *loop(const listint_t *head)
{
	listint_t *i, *t;

	for (; head; head = head->next)
	{
		for (i = head->next, t = head->next->next; t && i;)
		{
			if (i == head || t == head)
			{
				return (head);
			}
			if (t == i)
			{
				break;
			}
			if (!i->next || !t->next->next)
			{
				return (NULL);
			}
			i = i->next;
			t = t->next->next;
		}
	}
	return (NULL);
}
