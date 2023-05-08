#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads file 
 * @filename: A pointer to file.
 * @letters: The number of letters
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *a;

	if (filename == NULL)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (a == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, a, letters);
	w = write(STDOUT_FILENO, a, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(a);
		return (0);
	}

	free(a);
	close(o);

	return (w);
}
