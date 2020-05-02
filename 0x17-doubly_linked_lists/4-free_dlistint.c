#include "lists.h"

/**
 * free_dlistint - will free a linked list.
 * @head: variable.
 * Return: head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *j;

	while (head)
	{
		j = head;
		head = head->next;
		free(j);
	}
}
