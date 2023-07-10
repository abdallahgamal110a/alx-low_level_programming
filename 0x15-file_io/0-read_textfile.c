#include"main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
*
* Return: actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, rd, wr;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

op = open(filename, O_RDONLY);
rd = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);

if (op == -1 || rd == -1 || wr == -1 || wr != rd)
{
free(buff);
return (0);
}

free(buff);
close(op);

return (wr);
}
