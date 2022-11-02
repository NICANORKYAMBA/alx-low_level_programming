#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: name of the file to be read
 * @letters: number of letters to be read and be printed
 *
 * Return: number of letters read on success
 * 0 if write fails
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int f_open, f_read, f_write;
	char *buf;

	f_open = f_read = f_write = 0;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (!buf)
		return (0);

	f_open = open(filename, O_RDONLY);

	if (f_open == -1)
		return (free(buf), 0);

	f_read = read(f_open, buf, letters);

	if (f_read == -1)
		return (free(buf), 0);

	f_write = write(STDOUT_FILENO, buf, f_read);

	if (f_read == -1)
		return (free(buf), 0);

	free(buf);
	close(f_open);
	return (f_read);
}
