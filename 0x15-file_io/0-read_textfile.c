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
	char buff[letters];

	fd = open("filename", O_RDONLY);

	if (fd == -1) 
		exit(0);

	if (filename == NULL)
		exit(0);

	read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);

	printf("%s", buf);

	return (fd);
}
