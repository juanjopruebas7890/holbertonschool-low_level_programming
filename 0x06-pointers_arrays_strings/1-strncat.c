#include "holberton.h"
/**
 * _strncat - Is the prototype, concatenates two strings.
 * @_strlen - Is another protptype we are using.
 * strlen: Is refering to a variable
 * @src: Is the variable we are working with
 * @dest: Is the second variable we are working with
 * @n: The variable that the main will assign
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int e = _strlen(dest);
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
	{
		dest[e] = src[p];
		e++;
	}
	return (dest);
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
