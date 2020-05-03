#include "lists.h"
/**
 * insert_dnodeint_at_index - Will add a node at a given pos.
 * @h: Variable.
 * @idx: Variable.
 * @n: Variable.
 * Return: null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *c;
	unsigned int p = 0;

	c = *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = c;
		c->prev = node;
		*h = node;
		return (node);
	}

	while (c)
	{
		if (p == idx - 1)
		{
			c->prev->next = node;
			node->prev = c->prev;
			c->prev = node;
			node->next = c;
			return (node);
		}
		c = c->next;
		p++;
	}
	return (free(node), NULL);
}
