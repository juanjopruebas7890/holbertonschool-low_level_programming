#include "lists.h"
/**
 * list_len - Will return th number of elements in the list.
 * @h: variable.
 * Return: i
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
       	}

       	node->str = strdup(str);
       	for (i = 0; str[i]; i++)
       	node->len = i;
       	node->next = (*head);
       	(*head) = node;

	return (*head);
}
