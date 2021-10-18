#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: file
 * @letters: number of letters to be printed
 *
 * Return: the amount of letters that could be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int cnt1, cnt2;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		free(buf);
		return (0);
	}

	cnt1 = read(fd, buf, letters);

	if (cnt1 == -1)
		return (0);

	cnt2 = write(STDOUT_FILENO, buf, cnt1);

	if (cnt2 == -1)
		return (0);

	free(buf);
	close(fd);
	return (cnt2);
}
