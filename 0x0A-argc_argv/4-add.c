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
	int add = 0, e, h;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (e = 1; e < argc; e++)
	{
		for (h = 0; argv[e][h] != '\0'; h++)
		{
			if (argv[e][h] < '\0' || argv[e][h] > '9')
			{
				printf("Error\n");
				return (1);
				}
		}
		add += atoi(argv[e]);
		}
	printf("%d\n", add);
	return (0);
}
