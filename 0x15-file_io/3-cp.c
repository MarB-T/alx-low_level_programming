#include "main.h"

/**
 * error_99 -checks error 99
 * @buf: buffer
 * @f: file descriptor
 * @argv: string argument
 * Return: nothng
 */
void error_99(int f, char *buf, char *argv)
{
	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buf);
		exit(99);
	}
}


/**
 * error_100 - checks error 100
 * @f: descriptor to check
 * @buf: buffer
 * Return: nothing
 */
void error_100(int f, char *buf)
{
	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f);
		free(buf);
		exit(100);
	}
}

/**
 * error_98 - checks error 98
 * @f: file to check
 * @buf: buffer
 * @argv: string argument
 * Return: nothing
 */
void error_98(int f, char *buf, char *argv)
{
	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buf);
		exit(98);
	}
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
	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
		return (0);
	old = open(argv[1], O_RDONLY);
	error_98(old, b, argv[1]);
	new = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(new, b, argv[2]);
	do {
		r = read(old, b, 1024);
		if (r == 0)
			break;
		error_98(r, b, argv[1]);
		w = write(new, b, r);
		error_99(w, b, argv[2]);
	} while (r >= 1024);
	r = close(new);
	error_100(r, b);
	w = close(old);
	error_100(w, b);
	free(b);
	return (0);
}
