#include "lists.h"

/**
 * dlistint_len - Will return th number of elements in the list.
 * @h: variable.
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
