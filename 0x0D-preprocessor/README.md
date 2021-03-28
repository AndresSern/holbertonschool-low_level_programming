# 0x0D. C - Preprocessor

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are macros and how to use them</li>
	<li>What are the most common predefined macros</li>
	<li>How to include guard your header files</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/UlmUG7PSamY2_qL6xze6wg" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
	<li><a href="/rltoken/KAqnlwAvPZ84KI2JFlJpSg" title="Object-like Macros" target="_blank">Object-like Macros</a> </li>
	<li><a href="/rltoken/cJyU0mmGRx_Wd9x8WwygOQ" title="Macro Arguments" target="_blank">Macro Arguments</a> </li>
	<li><a href="/rltoken/A5176irunoejPUjwT3pFCQ" title="Pre Processor Directives in C" target="_blank">Pre Processor Directives in C</a> </li>
	<li><a href="/rltoken/lgohqkU5DlzUBkO2MeMmHA" title="The C Preprocessor" target="_blank">The C Preprocessor</a> </li>
	<li><a href="/rltoken/C47iIZ3tGug6sklTB7hT_Q" title="Standard Predefined Macros" target="_blank">Standard Predefined Macros</a> </li>
	<li><a href="/rltoken/sqLUMtBCgAAXVdhIaVoaWQ" title="include guard" target="_blank">include guard</a> </li>
	<li><a href="/rltoken/fJJUPJ-zZXlh3db00FEsJw" title="Common Predefined Macros" target="_blank">Common Predefined Macros</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-object_like_macro.h**:](#0-object_like_macroh) Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.
1.	[**1-pi.h**:](#1-pih) Create a header file that defines a macro named <code>PI</code> as an abbreviation for the token <code>3.14159265359</code>.
2.	[**2-main.c**:](#2-mainc) Program that prints the name of the file it was compiled from, followed by a new line.
3.	[**3-function_like_macro.h**:](#3-function_like_macroh) Function-like macro <code>ABS(x)</code> that computes the absolute value of a number <code>x</code>.
4.	[**4-sum.h**:](#4-sumh) Function-like macro <code>SUM(x, y)</code> that computes the sum of the numbers <code>x</code> and <code>y</code>.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-object_like_macro.h

**<p>Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.</p>**

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

### 1-pi.h

**<p>Create a header file that defines a macro named <code>PI</code> as an abbreviation for the token <code>3.14159265359</code>.</p>**

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

### 2-main.c

**<p>Program that prints the name of the file it was compiled from, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

### 3-function_like_macro.h

**<p>Function-like macro <code>ABS(x)</code> that computes the absolute value of a number <code>x</code>.</p>**

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

### 4-sum.h

**<p>Function-like macro <code>SUM(x, y)</code> that computes the sum of the numbers <code>x</code> and <code>y</code>.</p>**

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

