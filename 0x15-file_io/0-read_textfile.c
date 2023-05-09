#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: The actual number of letters can read and print
 *         0, if file name is null, cannot be opened or read, or,
 *         if write fails or does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);

	return (w);
}
