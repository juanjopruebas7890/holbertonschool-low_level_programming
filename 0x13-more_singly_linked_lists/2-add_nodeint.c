#include "lists.h"
/**
 * add_nodeint - Will add a new node at the beggining of the list.
 * @head: variable.
 * @n: Variable.
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == 0)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
