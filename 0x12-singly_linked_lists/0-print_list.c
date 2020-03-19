#include "lists.h"
#include <strings.h>

/**
 * print_list - Will print the lists that are passed to it.
 * @h: variable.
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (i->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->str);
		}
		h->next;
	}
	return (i);
}
