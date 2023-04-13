#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *strncat(char *dest, const char *src, size_t n);
void *calloc(size_t nmemb, size_t size);
void *_calloc(unsigned int nmemb, unsigned int size);
