#include "holberton.h"

/**
*create_file - creates a file and writes text_content in it
*@filename: name of file
*@text_content: the content that will be written in the file
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, rw, len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
if (fd < 0)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;

rw = write(fd, text_content, len);
if (rw < 0)
return (-1);
}

close(fd);
return (1);
}
