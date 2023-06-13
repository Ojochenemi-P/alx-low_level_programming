#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	k = write(i, text_content, len);

	if (i == -1 || k == -1)
		return (-1);

	close(i);

	return (1);
}
