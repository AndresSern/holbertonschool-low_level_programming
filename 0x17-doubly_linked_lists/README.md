# 0x17. C - Doubly linked lists

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is a doubly linked list</li>
	<li>How to use doubly linked lists</li>
	<li>Start to look for the right source of information without too much help</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/d6DW7K0HrkIcVdzZxkidDw" title="What is a Doubly Linked List" target="_blank">What is a Doubly Linked List</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-print_dlistint.c**:](#0-print_dlistintc) Function that prints all the elements of a <code>dlistint_t</code> list.
1.	[**1-dlistint_len.c**:](#1-dlistint_lenc) Function that returns the number of elements in a linked <code>dlistint_t</code> list.
2.	[**2-add_dnodeint.c**:](#2-add_dnodeintc) Function that adds a new node at the beginning of a <code>dlistint_t</code> list.
3.	[**3-add_dnodeint_end.c**:](#3-add_dnodeint_endc) Function that adds a new node at the end of a <code>dlistint_t</code> list.
4.	[**4-free_dlistint.c**:](#4-free_dlistintc) Function that frees a <code>dlistint_t</code> list.
5.	[**5-get_dnodeint.c**:](#5-get_dnodeintc) Function that returns the nth node of a <code>dlistint_t</code> linked list.
6.	[**6-sum_dlistint.c**:](#6-sum_dlistintc) Function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.
7.	[**7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c**:](#7-insert_dnodeintc-2-add_dnodeintc-3-add_dnodeint_endc) Function that inserts a new node at a given position.Your files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction
8.	[**8-delete_dnodeint.c**:](#8-delete_dnodeintc) Function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

###  0-print_dlistint.c

**<p>Function that prints all the elements of a <code>dlistint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-&gt; 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 1-dlistint_len.c

**<p>Function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 2-add_dnodeint.c

**<p>Function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&amp;head, 0);
    add_dnodeint(&amp;head, 1);
    add_dnodeint(&amp;head, 2);
    add_dnodeint(&amp;head, 3);
    add_dnodeint(&amp;head, 4);
    add_dnodeint(&amp;head, 98);
    add_dnodeint(&amp;head, 402);
    add_dnodeint(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 3-add_dnodeint_end.c

**<p>Function that adds a new node at the end of a <code>dlistint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 4-free_dlistint.c

**<p>Function that frees a <code>dlistint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 5-get_dnodeint.c

**<p>Function that returns the nth node of a <code>dlistint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node-&gt;n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

### 6-sum_dlistint.c

**<p>Function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$ 

</code></pre>

### 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c

**<p>Function that inserts a new node at a given position.</p><p>Your files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 7-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&amp;head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
</code></pre>

### 8-delete_dnodeint.c

**<p>Function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$ 
</code></pre>

