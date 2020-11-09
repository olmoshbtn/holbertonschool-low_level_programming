#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:
 * @letters:
 *
 * Return: 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd, bytes;
        char * buf;

        if (filename == NULL)
        {
                return(0);
        }

        /* read */
        fd = open(filename, O_RDONLY);
        if (fd == - 1)
        {
                return(0);
        }
        buf = malloc(sizeof(size_t) * letters);
        if (buf == NULL)
        {
                return (0);
        }
        bytes = read(fd, buf, letters);
        buf [bytes + 1] = EOF;

        write(STDOUT_FILENO, buf, bytes);

        close(fd);
        free(buf);
        return (bytes); 
}
