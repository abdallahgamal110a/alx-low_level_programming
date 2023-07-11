/*
* File: 0-read_textfile.c
*/
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
int op;
ssize_t n_rd, n_wr;
char *buffer;

if (filename == NULL)
return (0);

op = open(filename, O_RDONLY);
if (op == -1)
return (0);

buffer = malloc(letters + 1);/* Add space for null terminator */
if (buffer == NULL)
return (0);

n_rd = read(op, buffer, letters);
if (n_rd == -1)
{
free(buffer);
close(op);
return (0);
}

buffer[n_rd] = '\0';/* Add null terminator */

n_wr = write(STDOUT_FILENO, buffer, n_rd);
if (n_wr == -1 || n_wr != n_rd)
{
free(buffer);
close(op);
return (0);
}

free(buffer);
close(op);
return (n_wr);
}
