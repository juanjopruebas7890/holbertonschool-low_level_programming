#include "lists.h"
/**
 * free_listint_safe - Will free a list
 * @h: variable
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *c = *h, *q = NULL;
	size_t sl = 0;

	while (c)
	{
		q = c;
		c = c->next, sl++;
		free(q);
		if (q <= c)
		{
			break;
		}
	}
	*h = NULL;
	return (sl);
}
