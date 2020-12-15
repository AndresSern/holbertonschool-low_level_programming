# 0x06. C - More pointers, arrays and strings
In this directory you will learn how to use pointers, arrays and strings and ¿What is the meaning each one?

## GENERAL:

1.  What are pointers and how to use them
2.  What are arrays and how to use them
3.  What are the differences between pointers and arrays
4.  How to use strings and how to manipulate them
5.  Scope of variables
6.  What are the most common C standard library functions to manipulate strings
7.  What are multidimensional arrays and how to use them


## Read or watch:

1.  Pointers and arrays: **https://intranet.hbtn.io/concepts/60**
2.  Data Structures: **https://intranet.hbtn.io/concepts/120**
3.  C - Arrays: **https://www.tutorialspoint.com/cprogramming/c_arrays.htm** 
4.  C - Pointers: **https://www.tutorialspoint.com/cprogramming/c_pointers.htm**
5.  C - Strings: **https://www.tutorialspoint.com/cprogramming/c_strings.htm**
6.  C - Pointer to Pointer: **https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm**
7.  C – Pointer to Pointer with example : **https://beginnersbook.com/2014/01/c-pointer-to-pointer/**
8.  Multi-dimensional Arrays in C : **https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm**
9.  Two dimensional (2D) arrays in C programming with example: **https://beginnersbook.com/2014/01/2d-arrays-in-c-example/**

## Files:

1.  **0-memset.c**
2.  **1-memcpy.c**
3.  **2-strchr.c**
4.  **3-strspn.c**
5.  **4-strpbrk.c**
6.  **5-strstr.c**
7.  **7-print_chessboard.c**
8.  **8-print_diagsums.c**
9.  **9-set_string.c **

## Tasks

### 0. memset 
*   File: **0-memset.c**

*Write a function that fills memory with a constant byte.*

1.	Prototype: char *_memset(char *s, char b, unsigned int n);
2.	The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
3.	Returns a pointer to the memory area s

Example:

```
julien@ubuntu:~/0x07$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```

### 1. memcpy 
*   File: **1-memcpy.c**

*Write a function that copies memory area.*

1.	Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
2.	The _memcpy() function copies n bytes from memory area src to memory area dest
3	Returns a pointer to dest

```
julien@ubuntu:~/0x07$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```

###  2. strchr  
*   File: **2-strchr.c**

*Write a function that locates a character in a string.*

1.	Prototype: char *_strchr(char *s, char c);
2.	Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

```
#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr 
llo
```

###  3. strspn 
*   File: **3-strspn.c**

*Write a function that gets the length of a prefix substring.*

1.	Prototype: unsigned int _strspn(char *s, char *accept);
2.	Returns the number of bytes in the initial segment of s which consist only of bytes from accept

```
#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
```

###  4. strpbrk  
*   File: **4-strpbrk.c**

*Write a function that searches a string for any of a set of bytes.*

1.	Prototype: char *_strpbrk(char *s, char *accept);
2.	The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
3.	Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

```
julien@ubuntu:~/0x07$ cat 4-main.c
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk 
llo, world

```

###   5. strstr  

* File: **5-strstr.c**

*Write a function that locates a substring.*

1.	Prototype: char *_strstr(char *haystack, char *needle);
2.	The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
3.	Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

```
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr 
world
julien@ubuntu:~/0x07$ 
```

### 6. Chess is mental torture
*   File: **7-print_chessboard.c**

*Write a function that prints the chessboard.*

1.    Prototype: void print_chessboard(char (*a)[8]);  

```
julien@ubuntu:~/0x07$ cat 7-main.c 
#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x07$
```


### 7. The line of life is a ragged diagonal between duty and desire 
*   File: **: 8-print_diagsums.c** 

*Write a function that prints the sum of the two diagonals of a square matrix of integers.*

1.	Prototype: void print_diagsums(int *a, int size);
2.	Format: see example
3.	You are allowed to use the standard library

*Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.*

```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$ 
```

### 8. Double pointer, double fun 

*   File: **9-set_string.c**

*Write a function that sets the value of a pointer to a char.*

1.    Prototype: void set_string(char **s, char *to); 

```
julien@ubuntu:~/0x07$ cat 9-main.c
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-set_string.c -o 9-set_string
julien@ubuntu:~/0x07$ ./9-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$ 
```
