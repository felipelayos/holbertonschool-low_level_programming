#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file.
 *
 * @filename: name of the file to create.
 * @text_content: text to put on the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, status;

	if (!filename)
		return (-1);

	/* check if the file should be void or have content */
	if (text_content)
	{
		len = 0;
		while (text_content)
		{
			len++;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	/* write on the file and save the status to check if fails */
	status = write(fd, text_content, len);
	close(fd);

	if (status < 0) /* if write fails return -1 */
	{
		return (-1);
	}
	return (1);
}
