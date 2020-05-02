#include "lists.h"

/**
 * add_dnodeint - Will add a node at the begginging of the list.
 * @head: variable.
 * @n: Variable.
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *c;

	if (head == NULL)
	{
		return (NULL);
	}

	c = malloc(sizeof(dlistint_t));
	if (c == NULL)
	{
		return (NULL);
	}
	c->n = n;
	if (*head == NULL)
	{
		c->next = NULL;
		c->prev = NULL;
	}
	else
	{
		c->next = *head;
		c->prev = NULL;
		(*head)->prev = c;
	}
	*head = c;
	return (c);
}
