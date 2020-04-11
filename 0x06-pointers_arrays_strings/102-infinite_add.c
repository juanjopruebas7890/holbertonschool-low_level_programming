#include "holberton.h"
/**
 * infinite_add - Will add two numbers
 * @n1: variable
 * @n2: variable
 * @r: variable
 * @size_r: variable
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, i, j, k, l, m, s, c, d1, d2;

	i = l = j = k = c = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		d1 = d2 = 0;
		if (i >= 0)
			d1 = n1[i--] - '0';
		if (j >= 0)
			d2 = n2[j--] - '0';
		s = d1 + d2 + c;
		if (s > 9)
		{
			c = 1;
			s = s - 10;
		}
		else
			c = 0;
		r[k++] = (a + '0');
		m = k;
		k = k - 1;
		for (l = 0; l < k; l++, k--)
		{
			a = r[k];
			r[k] = r[l];
			r[l] = a;
		}
	}
	r[m] = '\0';
	return (r);
}
