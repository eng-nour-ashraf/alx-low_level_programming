#include "main.h"

/**
 * create_file - Creates file
 * @filename: A pointer to file.
 * @text_content: A pointer to a string.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, a = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, a);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
