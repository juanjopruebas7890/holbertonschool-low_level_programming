#include "lists.h"

/**
 * print_listint - Will print the lists that are passed to it.
 * @h: variable.
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
