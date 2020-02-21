#include "holberton.h"
/**
 * rot13 - is the protptype.
 * @u: Is the variable of the main.
 * w: Is the variable we are working with
 * g: is the variable that we are working with.
 *Return: 0
 */
char *rot13(char *u)
{
	int w;
	int g;
	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; u[w] != '\0'; w++)
	{
		for (g = 0; i[g] != '\0'; g++)
		{
			if (u[w] == i[g])
			{
				u[w] = o[g];
				break;
			}
		}
	}
	return (u);
}
