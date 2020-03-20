#include "lists.h"
/**
 * add_node - Will add a node at the begginging of the list.
 * @head: variable.
 * @str: Variable.
 * Return: head double pointer
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
	for (i = 0; str[i]; i++, str++)
		;
	node->len = i;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
