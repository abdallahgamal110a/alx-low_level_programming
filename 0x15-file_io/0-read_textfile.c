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
char *b;
ssize_t or;
ssize_t w;
ssize_t t;
or = open(filename, O_RDONLY);
if (or == -1)
return (0);
b = malloc(sizeof(char) * letters);
t = read(or, b, letters);
w = write(STDOUT_FILENO, b, t);
free(b);
close(or);
return (w);
}
