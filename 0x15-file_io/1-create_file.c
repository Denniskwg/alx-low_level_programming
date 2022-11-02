#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 if success -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l = 0;
	int j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[l] != '\0')
		l++;
	j = write(fd, text_content, l);
	if (j == -1)
		return (-1);
	close(fd);
	return (1);
}
