#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: pointer to a file
 * @text_content: content of the file being created
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		 return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		write(fd, text_content, i);
	}

	close(fd);
	return (1);
}
