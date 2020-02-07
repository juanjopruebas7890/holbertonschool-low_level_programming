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
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}
	if (g != '9')
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);

}
