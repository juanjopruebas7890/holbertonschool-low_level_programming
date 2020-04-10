#include <stdio.h>
/**
 * main - Will print the first 98 fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long u = 0, h = 1, q, t, l, b, c;

	for (i = 1; i <= 91; i++)
	{
		q = u + h;
		u = h;
		h = q;
		printf("%lu, ", q);
	}
	t = u % 1000;
	u = u / 1000;
	l = h % 1000;
	h = h / 1000;
	while (i <= 98)
	{
		c = (t + l) / 1000;
		b = (t + l) - c * 1000;
		q = (u + h) + c;
		t = l;
		l = b;
		u = h;
		h = q;
		if (b >= 100)
		{
			printf("%lu%lu", q, b);
		}
		else
		{
			printf("%lu0%lu", q, b);
		}
		if (i != 98)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
