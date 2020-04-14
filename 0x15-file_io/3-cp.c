#include "holberton.h"
/**
 * main - Will copy the content of a file.
 * @ac: Variable.
 * @av: Variable
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int i, j, c1, c2;
	ssize_t rd, wr;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	i = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	j = open(av[1], O_RDONLY);
	if (i == -1 || j == -1)
	{
		if (i == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				av[2]), exit(99);
		if (j == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				av[1]), exit(98);
	}
	while ((rd = read(j, buf, 1024)) != 0)
	{
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]), exit(98);
		wr = write(i, buf, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				av[2]), exit(99);
	}
	c1 = close(i);
	c2 = close(j);
	if (c1 == -1 || c2 == -1)
	{
		if (c1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		if (c2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	return (0);
}

