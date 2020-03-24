#include "lists.h"
/**
 * free_listint - Will free the code.
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
