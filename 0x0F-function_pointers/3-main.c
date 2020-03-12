#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Will execute a function.
 * @argc: variable.
 * @argv: Variable.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s = NULL;
	int num1 = 0;
	int num2 = 0;
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(s)(num1, num2);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
