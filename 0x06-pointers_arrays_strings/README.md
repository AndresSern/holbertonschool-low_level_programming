# 0x06. C - More pointers, arrays and strings

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

0.	[**0-strcat.c**:](#0-strcatc) Function that concatenates two strings.FYI The standard library provides a similar function <code>strcat</code>. Run <code>man strcat</code> to learn more.
1.	[**1-strncat.c**:](#1-strncatc) Function that concatenates two strings.FYI The standard library provides a similar function <code>strncat</code>. Run <code>man strncat</code> to learn more.
2.	[**2-strncpy.c**:](#2-strncpyc) Function that copies a string.FYI The standard library provides a similar function <code>strncpy</code>. Run <code>man strncpy</code> to learn more.
3.	[**3-strcmp.c**:](#3-strcmpc) Function that compares two strings.FYI The standard library provides a similar function <code>strcmp</code>. Run <code>man strcmp</code> to learn more.
4.	[**4-rev_array.c**:](#4-rev_arrayc) Function that reverses the content of an array of integers.
5.	[**5-string_toupper.c**:](#5-string_toupperc) Function that changes all lowercase letters of a string to uppercase.
6.	[**6-cap_string.c**:](#6-cap_stringc) Function that capitalizes all words of a string.
7.	[**7-leet.c**:](#7-leetc) Function that encodes a string into <a href="/rltoken/HDZQ5imXboSDnMXO9P0-Tg" title="1337" target="_blank">1337</a>.
8.	[**8-rot13.c**:](#8-rot13c) Function that encodes a string using <a href="/rltoken/IFaBd0QrK-h50gV7IoW9iQ" title="rot13" target="_blank">rot13</a>.
9.	[**100-print_number.c**:](#100-print_numberc) Function that prints an integer.
10.	[**101-magic.c**:](#101-magicc) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2020/9/21b4fc5c1b5df84e6ae4fe8807aa359d929e748a.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T161304Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=9295ed3246093135b6175ae5ea4f038e15ab1b9a41f0b1d11c1a2e2b3024d122" alt="" style="">
<br><br>
Add one line to <a href="https//github.com/holbertonschool/make_magic_happen/blob/master/magic.c" title="this code" target="_blank">this code</a>, so that the program prints <code>a[2] = 98</code>, followed by a new line.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-strcat.c

**<p>Function that concatenates two strings.</p><p>FYI The standard library provides a similar function <code>strcat</code>. Run <code>man strcat</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x06$ cat 0-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat
Hello
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$
</code></pre>

### 1-strncat.c

**<p>Function that concatenates two strings.</p><p>FYI The standard library provides a similar function <code>strncat</code>. Run <code>man strncat</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 1-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat
Hello
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x06$
</code></pre>

### 2-strncpy.c

**<p>Function that copies a string.</p><p>FYI The standard library provides a similar function <code>strncpy</code>. Run <code>man strncpy</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 2-main.c
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
    int i;

    for (i = 0; i &lt; 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i &lt; 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x06$
</code></pre>

### 3-strcmp.c

**<p>Function that compares two strings.</p><p>FYI The standard library provides a similar function <code>strcmp</code>. Run <code>man strcmp</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 3-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp
-15
15
0
julien@ubuntu:~/0x06$
</code></pre>

### 4-rev_array.c

**<p>Function that reverses the content of an array of integers.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 4-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i &lt; n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
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
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x06$
</code></pre>

### 5-string_toupper.c

**<p>Function that changes all lowercase letters of a string to uppercase.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 5-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Holberton School!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper
HOLBERTON SCHOOL!
HOLBERTON SCHOOL!
julien@ubuntu:~/0x06$
</code></pre>

### 6-cap_string.c

**<p>Function that capitalizes all words of a string.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 6-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x06$
</code></pre>

### 7-leet.c

**<p>Function that encodes a string into <a href="/rltoken/HDZQ5imXboSDnMXO9P0-Tg" title="1337" target="_blank">1337</a>.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 7-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x06$
</code></pre>

### 8-rot13.c

**<p>Function that encodes a string using <a href="/rltoken/IFaBd0QrK-h50gV7IoW9iQ" title="rot13" target="_blank">rot13</a>.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 8-main.c
#include "holberton.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-rot13.c -o 8-rot13
julien@ubuntu:~/0x06$ ./8-rot13
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/0x06$
</code></pre>

### 100-print_number.c

**<p>Function that prints an integer.</p>**

<pre><code>julien@ubuntu:~/0x06$ cat 100-main.c
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
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-print_number.c -o 100-print_numbers
julien@ubuntu:~/0x06$ ./100-print_numbers
98
402
1024
0
-98
julien@ubuntu:~/0x06$
</code></pre>

### 101-magic.c

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2020/9/21b4fc5c1b5df84e6ae4fe8807aa359d929e748a.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T161304Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=9295ed3246093135b6175ae5ea4f038e15ab1b9a41f0b1d11c1a2e2b3024d122" alt="" style="">
<br><br>
Add one line to <a href="https//github.com/holbertonschool/make_magic_happen/blob/master/magic.c" title="this code" target="_blank">this code</a>, so that the program prints <code>a[2] = 98</code>, followed by a new line.</p>**

None

