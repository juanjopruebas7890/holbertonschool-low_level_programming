#include "lists.h"
/**
 * print_list - Will print the lists that are passed to it.
 * @h: variable.
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
