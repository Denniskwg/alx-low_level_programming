#include "main.h"
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if success -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l = 0, j;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1 || errno == EACCES)
		return (-1);
	if (text_content == NULL && fd != -1)
	{
		close(fd);
		return (1);
	}
	else if (text_content == NULL && fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[l] != '\0')
		l++;
	j = write(fd, text_content, l);
	if (j == -1)
		return (-1);
	close(fd);
	return (1);
}
