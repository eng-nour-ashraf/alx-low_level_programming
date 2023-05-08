#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: A pointer to file.
 * @text_content: The string
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, a = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, a);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
