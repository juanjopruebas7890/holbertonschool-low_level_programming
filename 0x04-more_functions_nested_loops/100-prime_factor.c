#include <stdio.h>
#include <math.h>
/**
 * main - Will find the larges prime factor of a number.
 * Return: 0.
 */
int main(void)
{
	int i = 2;
	long j = 612852475143;

	while (j >= i)
	{
		if (j % i == 0)
		{
			j = j / i;
		}
		else
		{
			i++;
		}
	}
	printf("%i\n", i);
	return (0);
}
