#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file that we will open
* @letters: number of letters it should read and print
* Return: the actual number of letters that we could read and print, 0 if fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *mybuf = malloc(sizeof(char) * letters);
int fd;
ssize_t rl, rw;

if (filename == NULL)
return (0);

fd = open(filename, O_RDWR);

if (fd == -1)
return (0);

rl = read(fd, mybuf, letters);
if (rl < 0)
return (0);

rw = write(STDOUT_FILENO, mybuf, rl);
if (rw < 0)
return (0);

free(mybuf);
close(fd);
return (rw);
}
