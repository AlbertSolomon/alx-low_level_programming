#include <stdio.h>
#include "main.h"

/**
 * error_file - checks if its possible to open a particular file
 * @file_from: file_from a particular location
 * @file_to: file_to (the name of the file which has been provided)
 * @argv: arguments vector which contains the actual provided args
 * Return: returns void.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number/count of arguments to be provided..
 * @argv: arguments vector which contains the actual provided args
 * Return: Its always 0 unless otherwise or required.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t nov_chars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nov_chars = 1024;
	while (nov_chars == 1024)
	{
		nov_chars = read(file_from, buff, 1024);
		if (nov_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buff, nov_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
