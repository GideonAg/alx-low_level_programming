#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sts/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - start
 * @filename: parameter
 * @letters: parameter
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

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
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, letters);
	free(buf);

	if (r != w)
		return (0);

	return (w);
}
