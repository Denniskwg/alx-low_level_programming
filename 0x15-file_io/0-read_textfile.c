#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @letters: number of letters it should read and print
 * @filename: file to read from
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, j;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	buffer[letters] = '\0';
	j = write(1, buffer, r);
	close(fd);
	free(buffer);
	return (j);
}
