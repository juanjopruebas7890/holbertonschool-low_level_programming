#include "lists.h"
/**
 * free_listint2 - Will free the code.
 * @head: variable, now is a double pointer.
 * Return: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *j;

	if (head)
	{
		while (head != NULL)
		{
			j = *head;
			*head = j->next;
			free(j);
		}
	}
}
