#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */