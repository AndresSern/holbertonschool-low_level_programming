# 0x08. C - Recursion

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is recursion</li>
	<li>How to implement recursion</li>
	<li>In what situations you should implement recursion</li>
	<li>In what situations you shouldn’t implement recursion</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/g3Ad0OyVWFDcLFUsTHREmw" title="0x08. Recursion, introduction" target="_blank">0x08. Recursion, introduction</a></li>
	<li><a href="/rltoken/2EGCEPVnMI-2DHexDv_eog" title="What on Earth is Recursion?" target="_blank">What on Earth is Recursion?</a> </li>
	<li><a href="/rltoken/hVLQFbmh7l9Fb6TKZpPHUg" title="C - Recursion" target="_blank">C - Recursion</a> </li>
	<li><a href="/rltoken/MvRHIlpXvInQh0e6yegKkg" title="C Programming Tutorial 85, Recursion pt.1" target="_blank">C Programming Tutorial 85, Recursion pt.1</a> </li>
	<li><a href="/rltoken/CYd7QYGpVE_TmfjRJwZOwg" title="C Programming Tutorial 86, Recursion pt.2" target="_blank">C Programming Tutorial 86, Recursion pt.2</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-puts_recursion.c**:](#0-puts_recursionc) Function that prints a string, followed by a new line.FYI The standard library provides a similar function <code>puts</code>. Run <code>man puts</code> to learn more.
1.	[**1-print_rev_recursion.c**:](#1-print_rev_recursionc) Function that prints a string in reverse.
2.	[**2-strlen_recursion.c**:](#2-strlen_recursionc) Function that returns the length of a string.FYI The standard library provides a similar function <code>strlen</code>. Run <code>man strlen</code> to learn more.
3.	[**3-factorial.c**:](#3-factorialc) Function that returns the factorial of a given number.
4.	[**4-pow_recursion.c**:](#4-pow_recursionc) Function that returns the value of <code>x</code> raised to the power of <code>y</code>.FYI The standard library provides a different function <code>pow</code>. Run <code>man pow</code> to learn more.
5.	[**5-sqrt_recursion.c**:](#5-sqrt_recursionc) Function that returns the natural square root of a number.FYI The standard library provides a different function <code>sqrt</code>. Run <code>man sqrt</code> to learn more.
6.	[**6-is_prime_number.c**:](#6-is_prime_numberc) Function that returns <code>1</code> if the input integer is a <a href="/rltoken/uMon4hPzNyQ_WSgpnTlShw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.
7.	[**7-is_palindrome.c**:](#7-is_palindromec) Function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-puts_recursion.c

**<p>Function that prints a string, followed by a new line.</p><p>FYI The standard library provides a similar function <code>puts</code>. Run <code>man puts</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Betty Holberton");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Betty Holberton
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 1-print_rev_recursion.c

**<p>Function that prints a string in reverse.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 2-strlen_recursion.c

**<p>Function that returns the length of a string.</p><p>FYI The standard library provides a similar function <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
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

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 3-factorial.c

**<p>Function that returns the factorial of a given number.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

### 4-pow_recursion.c

**<p>Function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p><p>FYI The standard library provides a different function <code>pow</code>. Run <code>man pow</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 5-sqrt_recursion.c

**<p>Function that returns the natural square root of a number.</p><p>FYI The standard library provides a different function <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 6-is_prime_number.c

**<p>Function that returns <code>1</code> if the input integer is a <a href="/rltoken/uMon4hPzNyQ_WSgpnTlShw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$ 
</code></pre>

### 7-is_palindrome.c

**<p>Function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.</p>**

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 7-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-is_palindrome.c -o 7-palindrome
julien@ubuntu:~/0x08. Recursion$ ./7-palindrome 
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

