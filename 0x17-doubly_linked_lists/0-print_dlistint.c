#include "lists.h"

/**
 * print_dlistint - Will print the lists that are passed to it.
 * @h: variable.
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

