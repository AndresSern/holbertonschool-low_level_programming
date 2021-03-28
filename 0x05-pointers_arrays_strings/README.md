# 0x05. C - Pointers, arrays and strings

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are pointers and how to use them</li>
	<li>What are arrays and how to use them</li>
	<li>What are the differences between pointers and arrays</li>
	<li>How to use strings and how to manipulate them</li>
	<li>Scope of variables</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/JDzn5TfvFN41WKKvjOfvTg" title="C - Arrays" target="_blank">C - Arrays</a> </li>
	<li><a href="/rltoken/9CA1cUi3AxHOszdncsKC7g" title="C - Pointers" target="_blank">C - Pointers</a> </li>
	<li><a href="/rltoken/VBdJIrssmpg5YLOfoGTVnA" title="C - Strings" target="_blank">C - Strings</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-reset_to_98.c**:](#0-reset_to_98c) Function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.
1.	[**1-swap.c**:](#1-swapc) Function that swaps the values of two integers.
2.	[**2-strlen.c**:](#2-strlenc) Function that returns the length of a string.FYI The standard library provides a similar function <code>strlen</code>. Run <code>man strlen</code> to learn more.
3.	[**3-puts.c**:](#3-putsc) Function that prints a string, followed by a new line, to <code>stdout</code>.FYI The standard library provides a similar function <code>puts</code>. Run <code>man puts</code> to learn more.
4.	[**4-print_rev.c**:](#4-print_revc) Function that prints a string, in reverse, followed by a new line.
5.	[**5-rev_string.c**:](#5-rev_stringc) Function that reverses a string.  
6.	[**6-puts2.c**:](#6-puts2c) Function that prints every other character of a string, starting with the first character, followed by a new line.
7.	[**7-puts_half.c**:](#7-puts_halfc) Function that prints half of a string, followed by a new line.
8.	[**8-print_array.c**:](#8-print_arrayc) Function that prints <code>n</code> elements of an array of integers, followed by a new line.
9.	[**9-strcpy.c**:](#9-strcpyc) Function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.FYI The standard library provides a similar function <code>strcpy</code>. Run <code>man strcpy</code> to learn more.
10.	[**100-atoi.c**:](#100-atoic) Function that convert a string to an integer.FYI The standard library provides a similar function <code>atoi</code>. Run <code>man atoi</code> to learn more.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-reset_to_98.c

**<p>Function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 0-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&amp;n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 
</code></pre>

### 1-swap.c

**<p>Function that swaps the values of two integers.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&amp;a, &amp;b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
</code></pre>

### 2-strlen.c

**<p>Function that returns the length of a string.</p><p>FYI The standard library provides a similar function <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 2-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
10
julien@ubuntu:~/0x05$ 
</code></pre>

### 3-puts.c

**<p>Function that prints a string, followed by a new line, to <code>stdout</code>.</p><p>FYI The standard library provides a similar function <code>puts</code>. Run <code>man puts</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 3-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 

</code></pre>

### 4-print_rev.c

**<p>Function that prints a string, in reverse, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 
</code></pre>

### 5-rev_string.c

**<p>Function that reverses a string.  </p>**

<pre><code>julien@ubuntu:~/0x05$ cat 5-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
Holberton
notrebloH
julien@ubuntu:~/0x05$ 
</code></pre>

### 6-puts2.c

**<p>Function that prints every other character of a string, starting with the first character, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 
</code></pre>

### 7-puts_half.c

**<p>Function that prints half of a string, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
</code></pre>

###  8-print_array.c

**<p>Function that prints <code>n</code> elements of an array of integers, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 8-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
</code></pre>

### 9-strcpy.c

**<p>Function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.</p><p>FYI The standard library provides a similar function <code>strcpy</code>. Run <code>man strcpy</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 9-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 
</code></pre>

### 100-atoi.c

**<p>Function that convert a string to an integer.</p><p>FYI The standard library provides a similar function <code>atoi</code>. Run <code>man atoi</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x05$ cat 100-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$ 
</code></pre>

