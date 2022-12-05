#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, r;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	close(fd);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);

	if (r != w)
		return (0);

	return (w);
}
