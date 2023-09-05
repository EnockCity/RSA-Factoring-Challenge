#ifndef _FACTOR_H_
#define _FACTOR_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define _GNU_SOURCE
#define BUFFER_SIZE 1024

int custom_getline(char **lineptr, size_t *n, FILE *stream);
void *_realloc(void *ptr, unsigned int new_size);
size_t read_line(FILE *fpt, char *buffer, size_t count);
int factorize(char *buffer);

#endif 
