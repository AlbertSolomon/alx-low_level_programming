#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: filename.
 * @letters: numbers of letters to be  printed.
 *
 * Return: numbers of letters printed in the stdout. returns 0 onfailure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nol;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nol = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nol);
}
