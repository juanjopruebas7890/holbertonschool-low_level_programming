#include "holberton.h"
/**
 * leet - is the protptype.
 * @k: Is the variable of the main.
 * p: Is the variable we are working with
 * e: is the variable that we are working with.
 *Return: 0
 */
char *leet(char *k)
{
	int e = 0;
	int p;
	char a1 [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char a2 [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (e = 0; k[e] != '\0'; e++)
	{
		for (p = 0; p < 10; p++)
			if (k[e] == a1[p])
				k[e] = a2[p];
	}
	return (k);
}
