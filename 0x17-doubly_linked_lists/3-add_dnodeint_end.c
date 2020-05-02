#include "lists.h"

/**
 * add_dnodeint_end - Will add a node at the begginging of the list.
 * @head: variable.
 * @n: Variable.
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c;
	dlistint_t *p = *head;

	c = malloc(sizeof(dlistint_t));
	if (c == NULL)
	{
		return (NULL);
	}
	c->n = n;
	c->next = NULL;
	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	while (p->next)
	{
		p = p->next;
	}
	return (c);
}
