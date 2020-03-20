#include "lists.h"
/**
 * add_node_end - Will add a node at the end of the list.
 * @head: variable.
 * Return: head.
 */
void free_list(list_t *head)
{
	list_t *tail = head;

	while (head != NULL)
	{
		head = head->next;
		free(tail->str);
		free(tail);
	}
}
