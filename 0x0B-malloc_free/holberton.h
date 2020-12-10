#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int _putchar(char c);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);  
#endif
