#include "lists.h"
/**
 * add_node_end - Will add a node at the end of the list.
 * @head: variable.
 * @str: Variable.
 * Return: head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;
	list_t *tail = *head;

	for (i = 0; str[i]; i++)

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
       	while (tail->next != NULL)
       	{
	       	tail = tail->next;
	}
	tail->next = node;

	return (node);
}
