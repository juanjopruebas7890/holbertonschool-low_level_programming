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
	int n;
	int l = 10;
	int z;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	z = n % l;
if (l > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n, z);
}
else if (l == 0)
{
	printf("Last digit of %i is %i and is zero\n", n, z);
}
else
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, z);
}
return (0);
}
