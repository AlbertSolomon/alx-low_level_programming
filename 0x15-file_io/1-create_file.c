#include "main.h"

/**
 * create_file - it is a function which creates a file..
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: when successful returns 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letter_no;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter_no = 0; text_content[letter_no]; letter_no++)
		;

	rwr = write(fd, text_content, letter_no);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
