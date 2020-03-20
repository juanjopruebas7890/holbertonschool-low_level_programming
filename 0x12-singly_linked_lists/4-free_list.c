#include "lists.h"
/**
 * free_list - Will add a node at the end of the list.
 * @head: variable.
 * Return: head.
 */
void free_list(list_t *head)
{
	list_t *j;

	while (head)
	{
		j = head->next;
		free(head->str);
		free(head);
		head = j;
	}
}
