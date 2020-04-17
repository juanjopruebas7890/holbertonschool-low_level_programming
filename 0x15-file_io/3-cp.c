#include "holberton.h"
void copy_contents(int, char *, int, char *);
/**
 * main - will copy the content
 * @argc: number of args
 * @argv: argument(s)
 *
 * Return: 0 on Success, -1 or exit on Failure
 */
int main(int argc, char **argv)
{
	int i, t, c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	t = open(argv[2], (O_WRONLY | O_TRUNC | O_CREAT), 00664);
	if (t == -1)
	{
		c = close(i);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_contents(t, argv[2], i, argv[1]);

	c = close(i);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	c = close(t);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	return (0);
}
/**
 * copy_contents - Will copy to read and write
 * @f2: file to read from
 * @filename2: filename
 * @f1: file to write to
 * @filename1: filename
 */
void copy_contents(int f2, char *filename2, int f1, char *filename1)
{
	int wr, rd = 1;
	char buf[1024];

	while (rd)
	{
		rd = read(f1, buf, sizeof(buf));
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			exit(98);
		}
		if (!rd)
			break;

		wr = write(f2, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
}
