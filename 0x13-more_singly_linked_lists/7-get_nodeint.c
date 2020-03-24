#include "lists.h"
/**
 * get_nodeint_at_index - Will return the nth node of the list.
 * @head: Variable.
 * @index: Variable
 * Return: current.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current;

	current = head;

	if (current == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (x == index)
		{
			return (current->next);
		}
		x++;
		current = current->next;
	}
	return (current);
}
