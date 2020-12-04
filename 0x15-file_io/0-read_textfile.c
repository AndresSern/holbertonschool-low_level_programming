#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to open it
 * @letters: The numbers of bytes to read
 * Return: Number of bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int lenRead, lenWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	lenRead = read(fd, buf, letters);

	lenWrite = write(STDOUT_FILENO, buf, lenRead);
	if (lenWrite != lenRead && lenWrite == -1)
		return (0);
	free(buf);
	close(fd);
	return (lenRead);
}
