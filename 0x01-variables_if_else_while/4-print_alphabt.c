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
	char u;

	for (u = 'a' ; u <= 'z' ; u++)
{
	if (u != 'e' && u != 'q')
{
	putchar(u);
}
}
	putchar ('\n');
	return (0);
}
