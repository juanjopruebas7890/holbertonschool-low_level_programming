#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - allocate a memory using malloc.
 * @s1: variable 1
 * @s2: Variable 2
 * @n: Variable 3
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar = NULL;
	unsigned int i, j, q, e = 0, t = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	if (n >= j)
		n = j;
	e = i + n + 1;
	ar = malloc(sizeof(char) * e);
	if (ar == NULL)
		return (NULL);
	for (q = 0; q < i; q++)
		ar[q] = s1[q];
	for (t = 0; t < n; t++)
		ar[q + t] = s2[t];
	ar[q + t] = '\0';
	if (ar == NULL)
		return (NULL);
	return (ar);
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
