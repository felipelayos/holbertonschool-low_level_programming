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
	int fd, n_characters, n_c_print;
	char *buffer = malloc(sizeof(*buffer));

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, letters);

	if (fd < 0) /* if open fails return 0 */
	{
		close(fd);
		free(buffer);
		return (0);
	}

	n_characters = read(fd, buffer, letters);

	n_c_print = write(STDOUT_FILENO, buffer, letters);

	if (n_c_print < 0) /* If write fails return 0 */
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (n_characters);
}
