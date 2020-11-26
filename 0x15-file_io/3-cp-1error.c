#include "holberton.h"

/**
 * main - function that call another function to copy a file
 * @argc: int count of arguments
 * @argv: char double pointer
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int rd_f, wr_f, fd_1, fd_2, cl_1, cl_2;
	char buff[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	rd_f = read(fd_1, buff, 1024);
	if (rd_f == -1 || fd_1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_1);
		exit(98);
	}
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	wr_f = write(fd_2, buff, rd_f);
	if (fd_2 == -1 || wr_f == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_2);
		exit(99);
	}
	while (rd_f == 1024)
	{
		rd_f = read(fd_1, buff, 1024);
		wr_f = write(fd_2, buff, rd_f);
	}
	cl_1 = close(fd_1);
	cl_2 = close(fd_2);
	if (cl_1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl_1);
		exit(100);
	}
	if (cl_2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close %d\n", cl_2);
		exit(100);
	}
	return (0);
}
