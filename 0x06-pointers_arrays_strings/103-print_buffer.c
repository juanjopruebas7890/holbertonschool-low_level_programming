#include "holberton.h"
/**
 * print_buffer - Will print a buffer
 * @b: variable
 * @size: variable
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int a, f, p;

	if (size > 0)
	{
		for (a = 0; a <= size - 1; a++)
		{
			if (a % 10 == 0)
				printf("%08x: ", a);
			printf("%02x", b[a]);
			if (a == size - 1 && a % 10 != 9)
				for (p = size % 10; p <= 9; p++)
					printf(" ");

			if (a != 0 && a % 2 != 0)
				printf(" ");
			if (a == size - 1 && a % 10 != 9)
				for (p = (size % 10) / 2; p <= 9; p++)
					printf(" ");

			if ((a + 1) % 10 == 0 || a == size - 1)
			{
				if (a == size - 1)
					f = a - ((size - 1) % 10);
				else
					f = a - 9;
				while (f <= a)
				{
					if (b[f] >= 32 && b[f] <= 126)
						printf("%c", b[f]);
					else
						printf(".");
					f++;
				}
				printf("\n");
			}
		}
	}
	else
		printf("\n");
}
