#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* MAIN_HEADER */
#endif 
