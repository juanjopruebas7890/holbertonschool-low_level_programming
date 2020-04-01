#include "holberton.h"
/**
 * main - Will copy the content of a file.
 * @argc: Variable.
 * @argv: Variable
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, wr, rd = 1024;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	i = open(argv[1], O_RDONLY);
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[2]), exit(98);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (j == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (rd == 1024)
	{
		rd = read(i, buf, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
		wr = write(j, buf, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(i) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i), exit(100);
	if (close(j) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j), exit(100);
	return (0);
}
