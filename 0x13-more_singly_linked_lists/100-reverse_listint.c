#include "lists.h"
/**
 * reverse_listint - Will reverse a linked list
 * @head: Variable
 * Return: head, in this case double pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *r = NULL;
	listint_t *node = NULL;

	r = *head;
	if (*head == NULL)
	{
		return (NULL);
	}

	while (r->next != NULL)
	{
		node = r->next;
		r->next = node->next;
		node->next = *head;
		*head = node;
	}
	return (*head);
}
