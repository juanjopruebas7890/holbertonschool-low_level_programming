#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, r;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (r = j + 1; r <= '9'; r++)
			{
				putchar(i);
				putchar(j);
				putchar(r);
				if (i <= '6' && j <= '8' && r <= '9')
				{putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
