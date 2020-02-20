#include "holberton.h"
#include <string.h>
/**
 * _strcat - Is the prototype, concatenates two strings.
 * @_strlen - Is another protptype we are using.
 * strlen: Is refering to a variable
 * @src: Is the variable we are working with
 * dest: Is the second variable we are working with
 * Return: 0
 */
int _strlen(char *src);
char *_strcat(char *dest, char *src)
{
	int j;
	int i = _strlen(dest);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int _strlen(char *src)
/**
 *strlen - Is a doc line
 */
{
	int n;


	for (n = 0; *(src + n) != '\0'; n++)
	{
	}
	return (n);
}
