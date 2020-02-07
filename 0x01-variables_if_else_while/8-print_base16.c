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
	char n;

	for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');
		return (0);

}
