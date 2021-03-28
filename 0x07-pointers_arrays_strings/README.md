# 0x07. C - Even more pointers, arrays and strings

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are pointers to pointers and how to use them</li>
	<li>What are multidimensional arrays and how to use them</li>
	<li>What are the most common C standard library functions to manipulate strings</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/97ic1ots5Y44UW4c5HBtRQ" title="C - Pointer to Pointer" target="_blank">C - Pointer to Pointer</a> </li>
	<li><a href="/rltoken/SLQf1I04zyLrA0OYFgXzlg" title="C – Pointer to Pointer with example" target="_blank">C – Pointer to Pointer with example</a> </li>
	<li><a href="/rltoken/OINOASSTk6-D9PqX2oZZYw" title="Multi-dimensional Arrays in C" target="_blank">Multi-dimensional Arrays in C</a> </li>
	<li><a href="/rltoken/czf9xxN9_8ISUNWTsLfBcw" title="Two dimensional (2D) arrays in C programming with example" target="_blank">Two dimensional (2D) arrays in C programming with example</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-memset.c**:](#0-memsetc) Function that fills memory with a constant byte.FYI The standard library provides a similar function <code>memset</code>. Run <code>man memset</code> to learn more.
1.	[**1-memcpy.c**:](#1-memcpyc) Function that copies memory area.FYI The standard library provides a similar function <code>memcpy</code>. Run <code>man memcpy</code> to learn more.
2.	[**2-strchr.c**:](#2-strchrc) Function that locates a character in a string.FYI The standard library provides a similar function <code>strchr</code>. Run <code>man strchr</code> to learn more.
3.	[**3-strspn.c**:](#3-strspnc) Function that gets the length of a prefix substring.FYI The standard library provides a similar function <code>strspn</code>. Run <code>man strspn</code> to learn more.
4.	[**4-strpbrk.c**:](#4-strpbrkc) Function that searches a string for any of a set of bytes.FYI The standard library provides a similar function <code>strpbrk</code>. Run <code>man strpbrk</code> to learn more.
5.	[**5-strstr.c**:](#5-strstrc) Function that locates a substring.FYI The standard library provides a similar function <code>strstr</code>. Run <code>man strstr</code> to learn more.
6.	[**7-print_chessboard.c**:](#7-print_chessboardc) Function that prints the chessboard.
7.	[**8-print_diagsums.c**:](#8-print_diagsumsc) Function that prints the sum of the two diagonals of a square matrix of integers.Note that in the following example we are casting an <code>int[][]</code> into an <code>int*</code>. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
8.	[**9-set_string.c**:](#9-set_stringc) Function that sets the value of a pointer to a char.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-memset.c

**<p>Function that fills memory with a constant byte.</p><p>FYI The standard library provides a similar function <code>memset</code>. Run <code>man memset</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 0-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

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
        while (i &lt; size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) &amp;&amp; i)
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
</code></pre>

### 1-memcpy.c

**<p>Function that copies memory area.</p><p>FYI The standard library provides a similar function <code>memcpy</code>. Run <code>man memcpy</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 1-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

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
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
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
</code></pre>

### 2-strchr.c

**<p>Function that locates a character in a string.</p><p>FYI The standard library provides a similar function <code>strchr</code>. Run <code>man strchr</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 2-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
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
julien@ubuntu:~/0x07$ 
</code></pre>

### 3-strspn.c

**<p>Function that gets the length of a prefix substring.</p><p>FYI The standard library provides a similar function <code>strspn</code>. Run <code>man strspn</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 3-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn 
5
julien@ubuntu:~/0x07$ 
</code></pre>

### 4-strpbrk.c

**<p>Function that searches a string for any of a set of bytes.</p><p>FYI The standard library provides a similar function <code>strpbrk</code>. Run <code>man strpbrk</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 4-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

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

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk 
llo, world
julien@ubuntu:~/0x07$ 
</code></pre>

### 5-strstr.c

**<p>Function that locates a substring.</p><p>FYI The standard library provides a similar function <code>strstr</code>. Run <code>man strstr</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 5-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

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

</code></pre>

### 7-print_chessboard.c

**<p>Function that prints the chessboard.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 7-main.c 
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
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
</code></pre>

### 8-print_diagsums.c

**<p>Function that prints the sum of the two diagonals of a square matrix of integers.</p><p>Note that in the following example we are casting an <code>int[][]</code> into an <code>int*</code>. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 8-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

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
</code></pre>

### 9-set_string.c

**<p>Function that sets the value of a pointer to a char.</p>**

<pre><code>julien@ubuntu:~/0x07$ cat 9-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&amp;s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-set_string.c -o 9-set_string
julien@ubuntu:~/0x07$ ./9-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$ 
</code></pre>

