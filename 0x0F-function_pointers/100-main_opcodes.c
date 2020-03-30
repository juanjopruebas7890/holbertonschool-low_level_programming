#include "function_pointers.h"
/**
 * main - It's the prototype.
 * @argc: variable.
 * @argv: Variable.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char *r = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++, r++)
	{
		printf("%02x\n", *r);
	}
	printf("%02x\n", *r);

	return (0);
}
