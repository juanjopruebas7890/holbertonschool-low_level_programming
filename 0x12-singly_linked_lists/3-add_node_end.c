#include "lists.h"
int _strlen(char *s);
/**
 * add_node_end - Will add a node at the end of the list.
 * @head: variable.
 * @str: Variable.
 * Return: head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *temp;
	list_t node;

	if (str == NULL || str == NULL)
	{
		return (NULL);
	}

	temp = *head;
	nw = &node;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->str = strdup(str);
	if (!nw->str)
	{
		free(nw);
		return (NULL);
	}
	nw->len = _strlen(nw->str);
	nw->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = nw;
	}
	else
		*head = nw;

	return (nw);
}
/**
 *_strlen - It will tell me how long is a string of characters
 *@s: It will call the word that is on the main
 *Return: n
 */
int _strlen(char *s)
{
	int n;


	for (n = 0; *(s + n) != '\0'; n++)
	{
	}
	return (n);
}

