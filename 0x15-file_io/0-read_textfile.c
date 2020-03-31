#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: name of the file to validate.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_characters;
	char *buffer;

	buffer = malloc(letters);

	if (!buffer)
		return (0);

	if (!filename)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1) /* if open fails return 0 */
	{
		close(fd);
		free(buffer);
		return (0);
	}

	n_characters = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, n_characters);

	close(fd);
	return (n_characters);
}
