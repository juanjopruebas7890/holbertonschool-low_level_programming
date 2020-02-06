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
	char h = 'a';
	char l = 'A';

	while (h <= 'z')
		putchar(h++);
	while (l <= 'Z')
		putchar(l++);
	putchar('\n');
	return (0);
}
