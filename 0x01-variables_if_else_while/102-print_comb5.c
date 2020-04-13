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
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (r = '0'; r <= '9'; r++)
			{
				for (w = '0'; w <= '9'; w++)
				{
					if (i < j || (j == r && j < w))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(r);
						putchar(w);

						if (!(i == '9' && j == '8' && r == '9' && w == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
