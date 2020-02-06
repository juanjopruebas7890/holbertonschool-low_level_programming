
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
	char a = 'a';

	while (a <= 'z')
		putchar(a++);
	if (a != 'e' && a != 'q')
	putchar('\n');
	return (0);
}
