#include "main.h"

#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, close1, close2;
	ssize_t ret_in, ret_out;
	char buf[BUF_SIZE];
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
 
	output_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
 	}

	while((ret_in = read(input_fd, buf, BUF_SIZE)) > 0)
	{ 
		ret_out = write(output_fd, buf, ret_in);
		if(ret_out != ret_in)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} 

	close1 = close (input_fd);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd);
		exit(100);
	}

	close2 = close (output_fd);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_fd);
		exit(100);
	}

	return (0);
}
