#include "holberton.h"
/**
 * print_buffer - Will print a buffer
 * @b: variable
 * @size: variable
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int a, f;


	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%08x: ", a);
			for (f = 0; f < 10; f++)
			{
				if (f % 2 == 0 && f != 0)
					printf(" ");
				if ((f + a) > size - 1)
					printf(" ");
				else
					printf("%.2x", b[a + f]);
			}
			printf(" ");
			for (f = 0; f < 10; f++)
			{
				if ((f + a) > size - 1)
					break;
				if (b[a + f] <= 31 || b[a + f] >= '~')
					b[a + f] = '.';
				putchar(b[a + f]);
			}
			printf("\n");
		}
	}
}
