#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, r, w;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (r = i; r <= '9'; r++)
				for (w = j; w <= '9'; w++)
				{
					if (!((j == w) && (i == r)))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(r);
						putchar(w);

						if (!(i == '9' && j == '8'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
	putchar('\n');
	return (0);
}
