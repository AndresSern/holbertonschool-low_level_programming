#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
void print_chessboard(char (*a)[8]);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
#endif
