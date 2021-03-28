# 0x04. C - More functions, more nested loops

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are nested loops and how to use them</li>
	<li>What is a function and how do you use functions</li>
	<li>What is the difference between a declaration and a definition of a function</li>
	<li>What is a prototype</li>
	<li>Scope of variables</li>
	<li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra</code></li>
	<li>What are header files and how to to use them with <code>#include</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/3WXPpZkwBEt_9MOlayYGWw" title="Nested while loops" target="_blank">Nested while loops</a> </li>
	<li><a href="/rltoken/ES8eagOrYppE4qSjaa4zQA" title="C - Functions" target="_blank">C - Functions</a> </li>
	<li><a href="/rltoken/X8cL-h23A-vdFyuRmomKQQ" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
	<li><a href="/rltoken/IAfwYbkv3JHqttvqlnz0Bw" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
	<li><a href="/rltoken/QvgB8JXWlTL_yqsUD-3-ag" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the “Once-Only Headers” paragraph</em>)</li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-isupper.c**:](#0-isupperc) Function that checks for uppercase character.FYI The standard library provides a similar function <code>isupper</code>. Run <code>man isupper</code> to learn more.
1.	[**1-isdigit.c**:](#1-isdigitc) Function that checks for a digit (<code>0</code> through <code>9</code>).FYI The standard library provides a similar function isdigit. Run man isdigit to learn more.
2.	[**2-mul.c**:](#2-mulc) Function that multiplies two integers.
3.	[**3-print_numbers.c**:](#3-print_numbersc) Function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.
4.	[**4-print_most_numbers.c**:](#4-print_most_numbersc) Function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.
5.	[**5-more_numbers.c**:](#5-more_numbersc) Function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.
6.	[**6-print_line.c**:](#6-print_linec) Function that draws a straight line in the terminal.
7.	[**8-print_square.c**:](#8-print_squarec) Function that prints a square, followed by a new line.
8.	[**9-fizz_buzz.c**:](#9-fizz_buzzc) The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.
9.	[**10-print_triangle.c**:](#10-print_trianglec) Function that prints a triangle, followed by a new line.
10.	[**100-prime_factor.c**:](#100-prime_factorc) The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>. program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.
11.	[**101-print_number.c**:](#101-print_numberc) Function that prints an integer.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-isupper.c

**<p>Function that checks for uppercase character.</p><p>FYI The standard library provides a similar function <code>isupper</code>. Run <code>man isupper</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 0-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
</code></pre>

### 1-isdigit.c

**<p>Function that checks for a digit (<code>0</code> through <code>9</code>).</p><p>FYI The standard library provides a similar function isdigit. Run man isdigit to learn more.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 1-main.c 
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
</code></pre>

### 2-mul.c

**<p>Function that multiplies two integers.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 2-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
</code></pre>

### 3-print_numbers.c

**<p>Function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 3-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$ 
</code></pre>

### 4-print_most_numbers.c

**<p>Function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/0x04$ 
</code></pre>

### 5-more_numbers.c

**<p>Function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 5-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04
</code></pre>

### 6-print_line.c

**<p>Function that draws a straight line in the terminal.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$ 
</code></pre>

### 8-print_square.c

**<p>Function that prints a square, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 8-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$ 
</code></pre>

### 9-fizz_buzz.c

**<p>The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.</p><p>program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.</p>**

<pre><code>julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$ 
</code></pre>

### 10-print_triangle.c

**<p>Function that prints a triangle, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 10-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
</code></pre>

### 100-prime_factor.c

**<p>The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>. </p><p>program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.</p>**

None

### 101-print_number.c

**<p>Function that prints an integer.</p>**

<pre><code>julien@ubuntu:~/0x04$ cat 101-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x04$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x04$ 
</code></pre>

