#include "main.h"

/**
 * create_file - creates a file
 * @filename: File to be created
 * @text_content: string to write to file
 * Return: 1-success, 1-fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	while (1)
	{
		if (text_content[len] != '\0')
		{
			len++;
		}
		else
			break;
	}
	if (text_content == NULL)
		len = 0;
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!text_content)
		return (-1);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
