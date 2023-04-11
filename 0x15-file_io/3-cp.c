#include "main.h"

/**
 * close_file - closes a file
 * @f: file descriptor to cose
 * Return: nothng
 */

void close_file(int f)
{
	int closed;

	closed = close(f);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Failed to close file descriptor %d\n", f);
		exit(100);
	}
}


/**
 * buffer - allocates space and return address
 * @file: content to write
 * Return: pointer
 */

char *buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", file);
		exit(99);
	}
	return (b);
}

/**
 * main - copies content of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return:0 success
 */

int main(int argc, char **argv)
{
	int old, new, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Syntax: copy <source_file> <destination_file>");
		exit(97);
	}
	b = buffer(argv[2]);
	old = open(argv[1], O_RDONLY);
	r = read(old, b, 1024);
	new = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (r)
	{
		w = write(new, b, r);
		if (old == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Encountered an error while reading from file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		if (new == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Encountered an error while writing to file %s\n", argv[2]);
			free(b);
			exit(99);
		}
		r = read(old, b, 1024);
		new = open(argv[2], O_WRONLY | O_APPEND);
	}
	close_file(new);
	close_file(old);
	return (0);
}
