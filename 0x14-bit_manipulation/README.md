# 0x14. C - Bit manipulation

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>Look for the right source of information without too much help</li>
	<li>How to manipulate bits and use bitwise operators</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/3N9o0-Gy3fxQoXJy6TUUHw" title="Google" target="_blank">Google</a> </li>
	<li><a href="/rltoken/7jk6HSHSs-DdXMEPKW1MoQ" title="Youtube" target="_blank">Youtube</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-binary_to_uint.c**:](#0-binary_to_uintc) Function that converts a binary number to an <code>unsigned int</code>.
1.	[**1-print_binary.c**:](#1-print_binaryc) Function that prints the binary representation of a number.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-binary_to_uint.c

**<p>Function that converts a binary number to an <code>unsigned int</code>.</p>**

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

### 1-print_binary.c

**<p>Function that prints the binary representation of a number.</p>**

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 &lt;&lt; 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 
</code></pre>
