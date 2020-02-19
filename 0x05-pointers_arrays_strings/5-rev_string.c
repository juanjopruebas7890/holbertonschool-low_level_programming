#include "holberton.h"
/**
 * rev_string - is the protptype
 *@s: is the variable that we are working with
 *Return: 0
 */
void rev_string(char *s)
{
	int t;
	int w = 0;
	int n = 0;

	for (t = 0; *(s + t) != '\0' ; t++)
	{
	}
	t = t - 1;
	for (w = 0 ; w  <= t; w++)
	{
		n = s[w];
		s[w] = s[t];
		s[t] = n;
		t--;
	}
}
