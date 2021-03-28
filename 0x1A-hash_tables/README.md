# 0x1A. C - Hash tables

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is a hash function</li>
	<li>What makes a good hash function</li>
	<li>What is a hash table, how do they work and how to use them</li>
	<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
	<li>What are the advantages and drawbacks of using hash tables</li>
	<li>What are the most common use cases of hash tables</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/uodWZz-2jyHReOeToaLNdQ" title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> </li>
	<li><a href="/rltoken/YiFi_oMjd9cZ4VepsS2RKQ" title="Hash function" target="_blank">Hash function</a> </li>
	<li><a href="/rltoken/Kswyyb1f2JY3dn-3TEckUQ" title="Hash table" target="_blank">Hash table</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**1-djb2.c**:](#1-djb2c) Hash function implementing the djb2 algorithm.
1.	[**2-key_index.c**:](#2-key_indexc) Function that gives you the index of a key.
2.	[**3-hash_table_set.c**:](#3-hash_table_setc) Function that adds an element to the hash table.If you want to test for collisions, here are some strings that collide using the djb2 algorithm
3.	[**4-hash_table_get.c**:](#4-hash_table_getc) Function that retrieves a value associated with a key.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 1-djb2.c

**<p>Hash function implementing the djb2 algorithm.</p>**

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 1-djb2.c 
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash &lt;&lt; 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
julien@ubuntu:~/0x1A. Hash tables$ 
julien@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-djb2.c -o b
julien@ubuntu:~/0x1A. Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

### 2-key_index.c

**<p>Function that gives you the index of a key.</p>**

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/0x1A. Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

### 3-hash_table_set.c

**<p>Function that adds an element to the hash table.</p><p>If you want to test for collisions, here are some strings that collide using the djb2 algorithm</p>**

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/0x1A. Hash tables$
</code></pre>

### 4-hash_table_get.c

**<p>Function that retrieves a value associated with a key.</p>**

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/0x1A. Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Holberton
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

