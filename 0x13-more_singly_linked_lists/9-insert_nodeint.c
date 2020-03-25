#include "lists.h"
/**
 * insert_nodeint_at_index - Will return the nth node of the list.
 * @head: Variable.
 * @idx: Variable.
 * @n: Variable.
 * Return: current.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *current;
	unsigned int p = 0;

	current = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		current = node->next;
		current = node;
		return (node);
	}

	while (current)
	{
		if (p == idx - 1)
		{
			node->next = current->next;
			current->next = node;
			return (node);
		}
		current = current->next;
		p++;
	}
	return (NULL);
}
