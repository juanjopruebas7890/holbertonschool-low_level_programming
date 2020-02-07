#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q = 0;

	while (q <= 99)
	{
		putchar(q / 10 + '0');
		putchar(q % 10 + '0');
		if (q != 99)
	{
		putchar(',');
		putchar(' ');
	}
		q++;
	}
	putchar('\n');
	return (0);
}
