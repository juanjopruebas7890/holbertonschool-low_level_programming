#include "holberton.h"
#include <string.h>
/**
 * _strcat - Is the prototype, concatenates two strings.
 * @src: Is the variable we are working with
 * @dest: Is the second variable we are working with
 * Return: 0
 */
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
/**
 *_strlen - It will tell me how long is a string of characters
 *@src: It will call the word that is on the main
 *Return: n
 */
int _strlen(char *src)
{
	int n;


	for (n = 0; *(src + n) != '\0'; n++)
	{
	}
	return (n);
}
