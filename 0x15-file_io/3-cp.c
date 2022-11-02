#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * main - copies the content of a file to another file.
  * @argc: number of arguments stored in argv.
  * @argv: the arguments.
  *
  * Return: Always Success.
  */
int main(int argc, char *argv[])
{
	int filecreate, filewrite, fileclose, filewt, filerd;
	char BUFFSIZE[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	filewrite = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (filewrite == -1)
		dprintf(STDERR_FILENO, ERR, argv[2]), exit(99);
	filecreate = open(argv[1], O_RDONLY);

	if (filecreate == -1)
		dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);

	while (1)
	{
		filerd = read(filecreate, BUFFSIZE, 1024);
		if (filerd == -1)
			dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);
		if (filerd > 0)
		{
			filewt = write(filewrite, BUFFSIZE, filerd);
			if (filewt == -1)
				dprintf(STDERR_FILENO, ERR, argv[2]), exit(99);
		} else
			break;
	}
	fileclose = close(filecreate);

	if (fileclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filecreate), exit(100);
	fileclose = close(filewrite);

	if (fileclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filewrite), exit(100);

	return (0);
}
