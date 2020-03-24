#include "lists.h"
/**
 * add_node_end - Will add a node at the end of the list.
 * @head: variable.
 * @str: Variable.
 * Return: head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == 0)
	{
		*head = node;
	}
	else
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = node;
	}
	return (node);
}

