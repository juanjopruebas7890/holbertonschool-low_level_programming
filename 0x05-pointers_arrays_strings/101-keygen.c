#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Is the prototype
 * Return: 0
 */
int main(void)
{
	int i;
	int t = 0;

	srand(time(0));
	while (t < 2772 - 127)
	{
		i = rand() % 127;
		if (i > 32)
		{
			putchar(i);
			t += i;
		}
	}
	putchar(2772 - t);
	return (0);
}
