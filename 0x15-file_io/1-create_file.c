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
	int fd, status, len = 0;

	if (!filename)
		return (-1);

	/*Check if the content exit to count it*/
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	/*Open the file (filename), if doent exist create, and add 0600(permissions)*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	/* write on the file and save the status to check if fails */
	status = write(fd, text_content, len);
	close(status);

	/* if write fails return -1 */
	if (status < 0)
	{
		return (-1);
	}
	return (1);
}
