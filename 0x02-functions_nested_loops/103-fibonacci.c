#include <stdio.h>
/**
 * main - Will print the fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long i = 0;
	long j = 1;
	long r;
	long q;
	long z = 0;

	for (q = 0; q < 50; q++)
	{
		r = i + j;
		i = j;
		j = r;
		if (r % 2 == 0 && r < 4000000)
		{
			z = z + r;
		}
	}
	printf("%lu\n", q);
	return (0);
}
