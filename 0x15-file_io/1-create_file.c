#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a new file with specified content
 *
 * @filename: name of file to create
 *
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	ret = write(fd, text_content, len);
	if (ret == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

