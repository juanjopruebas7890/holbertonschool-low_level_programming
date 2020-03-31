#include "holberton.h"
/**
 * read_textfile - Will read a textfile.
 * @filename: Variable.
 * @letters: Variable
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, rd = 0, wr = 0;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}

	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}

	rd = read(i, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(i);
	return (wr);
}
