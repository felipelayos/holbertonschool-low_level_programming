#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	/* write on the file and save the status to check if fails */
	if (text_content)
	{
		status = write(fd, text_content, len);
		close(status);

		/* if write fails return -1 */
		if (status < 0)
		{
			return (-1);
		}
	}
	return (1);
}
