#include "lists.h"
/**
 * free_list - Will add a node at the end of the list.
 * @head: variable.
 * Return: head.
 */
void free_list(list_t *head)
{
	list_t *tail = head;

	while (head)
	{
		head = head->next;
		free(tail->str);
		free(tail);
	}
}
