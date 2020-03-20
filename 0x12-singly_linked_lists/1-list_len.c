#include "lists.h"
/**
 * list_len - Will return th number of elements in the list.
 * @h: variable.
 * Return: i
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
