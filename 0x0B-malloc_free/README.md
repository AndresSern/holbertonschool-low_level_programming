# 0x0B. C - malloc, free

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is the difference between automatic and dynamic allocation</li>
	<li>What is <code>malloc</code> and <code>free</code> and how to use them</li>
	<li>Why and when use <code>malloc</code></li>
	<li>How to use <code>valgrind</code> to check for memory leak</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/aRWpmTTHkSS2nTGh0Q5xyA" title="0x0a - malloc &amp; free - quick overview.pdf" target="_blank">0x0a - malloc &amp; free - quick overview.pdf</a></li>
	<li><a href="/rltoken/yD3tk5u--ws7QNFwTOfaDQ" title="Dynamic memory allocation in C - malloc calloc realloc free" target="_blank">Dynamic memory allocation in C - malloc calloc realloc free</a> (<em>stop at 6:50</em>)</li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-create_array.c**:](#0-create_arrayc) Function that creates an array of chars, and initializes it with a specific char.
1.	[**1-strdup.c**:](#1-strdupc) Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.FYI The standard library provides a similar function <code>strdup</code>. Run <code>man strdup</code> to learn more.
2.	[**2-str_concat.c**:](#2-str_concatc) Function that concatenates two strings.
3.	[**3-alloc_grid.c**:](#3-alloc_gridc) Function that returns a pointer to a 2 dimensional array of integers.
4.	[**4-free_grid.c**:](#4-free_gridc) Function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.
5.	[**5-argstostr.c**:](#5-argstostrc) Function that concatenates all the arguments of your program.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-create_array.c

**<p>Function that creates an array of chars, and initializes it with a specific char.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

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
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>

### 1-strdup.c

**<p>Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p><p>FYI The standard library provides a similar function <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("Holberton");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s 
Holberton
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>

### 2-str_concat.c

**<p>Function that concatenates two strings.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-str_concat.c -o c
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ ./c | cat -e
Betty Holberton$
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ 
</code></pre>

### 3-alloc_grid.c

**<p>Function that returns a pointer to a 2 dimensional array of integers.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-alloc_grid.c -o g
julien@ubuntu:~/0x0a. malloc, free$ ./g
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

### 4-free_grid.c

**<p>Function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
julien@ubuntu:~/0x0a. malloc, free$ valgrind ./f
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>

### 5-argstostr.c

**<p>Function that concatenates all the arguments of your program.</p>**

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 5-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

