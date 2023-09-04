#include "main.h"

/**
 * append_text_to_file - adds text at end of a file
 * @filename: filename.
 * @text_content: kinda like the append function in pythod, adds to file
 *
 * Return: returns 1 if successful else -1 ..
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nov_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nov_letters = 0; text_content[nov_letters]; nov_letters++)
			;

		rwr = write(fd, text_content, nov_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
