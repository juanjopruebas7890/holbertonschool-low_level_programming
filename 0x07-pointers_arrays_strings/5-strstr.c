#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: The variable to be studied
 * @needle: Another variable
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, p = 0;

	while (haystack[m])
	{
		while (needle[p] && (haystack[m] == needle[0]))
		{
			if (haystack[m + p] == needle[p])
			{
				p++;
			}
			else
			{
				break;
			}
		}
		if (needle[p])
		{
			m++;
			p = 0;
		}
		else
		{
			return (haystack + m);
		}
	}
	return (0);
}
