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
int a;
ssize_t n_rd, n_wr;
char *res;

if (filename == NULL)
return (0);

a = open(filename, O_RDONLY);
if (a == -1)
return (0);

res = malloc(letters + 1);
if (res == NULL)
return (0);

n_rd = read(a, res, letters);
if (n_rd == -1)
{
free(res);
close(a);
return (0);
}

buf[n_rd] = '\0';
n_wr = write(STDOUT_FILENO, res, n_rd);
if (n_wr == -1 || n_wr != n_rd)
{
free(res);
close(a);
return (0);
}

free(res);
close(a);
return (n_wr);
}
