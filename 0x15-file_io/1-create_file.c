#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
/**
 * create_file - creates a file.
 * @filename: pointer to file.
 * @text_content: buffer.
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int filecreate, len;

	len = 0;

	if (!filename)
		return (-1);

	filecreate = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (filecreate == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		write(filecreate, text_content, len);
	}
	close(filecreate);
	return (1);
}
