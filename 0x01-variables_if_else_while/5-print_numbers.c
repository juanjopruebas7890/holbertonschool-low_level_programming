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
	char a = 1;

	while (a <= 10)
		putchar(a++);
	putchar('\n');
	return (0);
}
