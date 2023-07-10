#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
