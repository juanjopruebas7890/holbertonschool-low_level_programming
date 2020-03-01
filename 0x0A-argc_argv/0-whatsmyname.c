#include <stdio.h>
/**
 * main - It is the prototype.
 * @argc: Is the variable we are working with.
 * @argv: Is the variable we are working with.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
