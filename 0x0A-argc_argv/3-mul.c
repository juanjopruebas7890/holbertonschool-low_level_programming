#include <stdio.h>
#include <stdlib.h>
/**
 * main - It is the prototype.
 * @argc: Is the variable we are working with.
 * @argv: Is the variable we are working with.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fn, sn, r;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		fn = atoi(argv[1]);
		sn = atoi(argv[2]);
		r = fn * sn;
		printf("%d\n", r);
	}
	return (0);
}
