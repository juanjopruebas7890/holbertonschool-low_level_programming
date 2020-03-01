#include <stdio.h>
/**
 * main - It is the prototype.
 * @argc: Is the variable we are working with.
 * @argv: Is the variable we are working with.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	printf("%s\n", argv[b]);
	return (0);
}
