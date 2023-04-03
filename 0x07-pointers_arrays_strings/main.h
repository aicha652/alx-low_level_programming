#include <string.h>
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n);
void *memset(void *s, int b, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
void *memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
char *strchr(const char *s, int c);
unsigned int _strspn(char *s, char *accept);
size_t strspn(const char *s, const char *accept);