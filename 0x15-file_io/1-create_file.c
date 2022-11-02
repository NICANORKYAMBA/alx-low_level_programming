#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int filecreate, writefile, truncfile, len;
	char *buf;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	
	len = strlen(text_content) + 1;
	
	if (filename)
	{
		truncfile = truncate(filename, len);
		if (!truncfile)
			return (-1);
	}
	filecreate = open(filename, O_CREAT | O_RDWR, 00600);

	if (!filecreate)
		return (-1);

	buf = malloc(len * sizeof(char));

	writefile = write(filecreate, text_content, len);

	if (!writefile)
		return (free(buf), -1);

	free(buf);
	close(filecreate);
	return (1);
}

