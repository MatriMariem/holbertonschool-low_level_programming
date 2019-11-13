#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 *@av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int rl, rw, fd1, fd2;
char mybuff[1024];
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
fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd2 < 0)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
exit(99);
}
while ((rl = read(fd1, &mybuff, 1024)) != 0)
{
rw = write(fd2, &mybuff, rl);
if (rw < 0)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
if (rl < 0)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
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
