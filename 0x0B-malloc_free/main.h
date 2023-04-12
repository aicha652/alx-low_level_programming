#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *strdup(const char *s);
char *str_concat(char *s1, char *s2);
char *strcat(char *s1, const char *s2);
int **alloc_grid(int width, int height);
