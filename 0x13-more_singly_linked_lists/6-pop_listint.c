#include "lists.h"
/**
 * pop_listint - Will delete the head of the node.
 * @head: variable, now is a double pointer.
 * Return: head.
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int t;

	j = *head;

	if (*head == NULL)
	{
		return (0);
	}

	t = j->n;

	*head = j->next;
	free(j);

	return (t);
}

