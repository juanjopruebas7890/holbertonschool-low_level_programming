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
	int add, k;

	if (argc == 2)
	{
		printf("0\n");
		return (1);
	}
	for (k = 1; k < argc; k++)
	{
		if (atoi(argv[k]) < 0)
		{
			printf("0\n");
			return (1);
		}
		if (atoi(argv[k]))
		{
			add += atoi(argv[k]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
