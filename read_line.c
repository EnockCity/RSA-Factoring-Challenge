#include <stdio.h>
#include <stdlib.h>

/**
 *read_line - read a line from a file.
 * @fpt- the file pointer.
 * @buffer- the buffer to store the line.
 * @count- the size of the buffer.
 * Return: The number of bytes read, or -1 on error.
 */
size_t read_line(FILE *fpt, char *buffer, size_t count)
{
	size_t n;

	n =custom_getline(buffer, &count, fpt);
	if (n == -1)
	{
		if (feof(fpt))
			return (0);
		else
			return (-1);
	}

	return (n);
}
