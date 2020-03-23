#include "lists.h"
/**
 * listint_len - Will print the length of the lists that are passed to it.
 * @h: variable.
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
