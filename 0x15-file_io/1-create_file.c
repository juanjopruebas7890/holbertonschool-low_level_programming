#include "holberton.h"
/**
 * create_file - Will create file.
 * @filename: Variable.
 * @text_content: Variable
 * Return: 0.
 */
int create_file(const char *filename, char *text_content)
{
	int i, wr = 0, s;

	if (filename == NULL)
	{
		return (-1);
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (s = 0; *(text_content + s); s++)
		{
		}

		wr = write(i, text_content, s);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(i);
	return (1);
}
