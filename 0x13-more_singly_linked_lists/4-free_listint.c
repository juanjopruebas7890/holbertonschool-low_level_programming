#include "lists.h"
/**
 * free_list - Will add a node at the end of the list.
 * @head: variable.
 * Return: head.
 */
void free_listint(listint_t *head)
{
	listint_t *j;

	while (head)
	{
		j = head->next;
		free(head->next);
		free(head);
		head = j;

	}
}
