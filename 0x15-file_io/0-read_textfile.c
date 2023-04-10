#include "main.h"

/**
 * read_textfile - Function to read and print textfile
 * @filename: pointer to the file to be printed
 * @letters: the number of letters to be read and printed
 * Return: Letters read (success) 0-fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ltrs;
	ssize_t r, w, o;

	if (filename == NULL)
		return (0);
	ltrs = malloc(sizeof(char) * letters);
	if (ltrs == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ltrs, letters);
	w = write(STDOUT_FILENO, ltrs, r);

	close(o);
	return (w);
}
