#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*copying - copy the content of file1 into file2
*@fd1: file descriptor of file 1
*@fd2: file descriptor of file 2
*@av1: name of file 1
*@av2: name of file 2
*/
void copying(int fd1, int fd2, char *av1, char *av2)
{
int rl, rw;
char mybuff[1024];
while ((rl = read(fd1, &mybuff, 1024)) != 0)
{
rw = write(fd2, &mybuff, rl);
	if (rw < 0)
	{
	dprintf(2, "Error: Can't write to %s\n", av2);
	exit(99);
	}
}

if (rl < 0)
{
dprintf(2, "Error: Can't read from file %s\n", av1);
exit(98);
}
}


/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 *@av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int fd1, fd2;
if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(av[1], O_RDONLY);
if (fd1 == -1)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd2 < 0)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
close(fd1);
exit(99);
}
copying(fd1, fd2, av[1], av[2]);
if (close(fd1) < 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd1);
exit(100);
}
if (close(fd2) < 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}

