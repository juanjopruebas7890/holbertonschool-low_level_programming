#include "lists.h"
/**
 * add_nodeint_end - Will add a node at the end of the list.
 * @head: variable.
 * @n: Variable
 * Return: head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (t == NULL)
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

