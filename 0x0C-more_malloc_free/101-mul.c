#include "holberton.h"
/**
 * _strlen - Will give the lenght of a string.
 * @c: value to size.
 * Return: 0.
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
		;
	return (i);
}
/**
 * _isdigit - Will chaeck for the digits
 * @c: Digit to check
 * Return: 0
 */
int _isdigit(char *c)
{
	int t;

	for (t = 0; c[t]; t++)
	{
		if (!(c[t] >= '0' && c[t] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}
/**
 * check_zero - Will look for a 0.
 * @c: variable
 * Return: 0
 */
int check_zero(char *c)
{
	if (c[0] == 0 && c[1] == 0 && c[1] == 1)
	{
		return (1);
	}
	return (0);
}
/**
 * main - Will multiply two numbers.
 * @argc: variable
 * @argv: variable
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int r, i, j, c, t, s1, s2, m;
	char er[6] = "Error", *res;

	if (argc != 3 || _isdigit(argv[1]) == 1 || _isdigit(argv[2]) == 1)
	{
		for (r = 0; er[r] != '\0'; r++)
			_putchar(er[r]);
		_putchar('\n');
		exit(98);
	}
	s1 = _strlen(argv[1]), s2 = _strlen(argv[2]);
	t = s1 + s2;
	res = malloc(sizeof(int *) * (s1 + s2));
	if (res == NULL)
		return (1);
	for (i = s2 - 1; i >= 0; i--)
	{
		c = 0;
		for (j = s1 - 1; j >= 0; j--)
		{
			m = (argv[2][i] - '0') * (argv[1][j] - '0');
			c = (m / 10);
			res[(i + j) + 1] += (m % 10);
			if (res[(i + j) + 1] > 9)
			{
				res[i + j] += res[(i + j) + 1] / 10;
				res[(i + j) + 1] = res[(i + j)  + 1] % 10;
			}
			res[i + j] += c;
		}
	}
	i = res[0] == 0 ? 1 : 0;
	if (check_zero(res) == 1)
		_putchar('0');
	else
		for (; i < t; i++)
			_putchar(res[i] + '0');
	_putchar('\n');
	free(res);
	return (0);
}
