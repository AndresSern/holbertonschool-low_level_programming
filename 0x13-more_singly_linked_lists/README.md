# 0x13. C - More singly linked lists

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>How to use linked lists</li>
	<li>Start to look for the right source of information without too much help</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/VxmJXbHtjDMJAKj7dU-6sg" title="Google" target="_blank">Google</a> </li>
	<li><a href="/rltoken/PqebvZ1ey95sB8eDiYl8_A" title="Youtube" target="_blank">Youtube</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-print_listint.c**:](#0-print_listintc) Function that prints all the elements of a <code>listint_t</code> list.
1.	[**1-listint_len.c**:](#1-listint_lenc) Function that returns the number of elements in a linked <code>listint_t</code> list.
2.	[**2-add_nodeint.c**:](#2-add_nodeintc) Function that adds a new node at the beginning of a <code>listint_t</code> list.
3.	[**3-add_nodeint_end.c**:](#3-add_nodeint_endc) Function that adds a new node at the end of a <code>listint_t</code> list.
4.	[**4-free_listint.c**:](#4-free_listintc) Function that frees a <code>listint_t</code> list.
5.	[**5-free_listint2.c**:](#5-free_listint2c) Function that frees a <code>listint_t</code> list.
6.	[**6-pop_listint.c**:](#6-pop_listintc) Function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node’s data (n).
7.	[**7-get_nodeint.c**:](#7-get_nodeintc) Function that returns the nth node of a <code>listint_t</code> linked list.
8.	[**8-sum_listint.c**:](#8-sum_listintc) Function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.
9.	[**9-insert_nodeint.c**:](#9-insert_nodeintc) Function that inserts a new node at a given position.
10.	[**10-delete_nodeint.c**:](#10-delete_nodeintc) Function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.
11.	[**100-reverse_listint.c**:](#100-reverse_listintc) Function that reverses a <code>listint_t</code> linked list.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-print_listint.c

**<p>Function that prints all the elements of a <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new-&gt;n = 9;
    new-&gt;next = head;
    head = new;
    n = print_listint(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_listint.c -o a
julien@ubuntu:~/0x13. More singly linked lists$ ./a 
9
8
-&gt; 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 1-listint_len.c

**<p>Function that returns the number of elements in a linked <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new-&gt;n = 9;
    new-&gt;next = head;
    head = new;
    n = listint_len(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint_len.c -o b
julien@ubuntu:~/0x13. More singly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 2-add_nodeint.c

**<p>Function that adds a new node at the beginning of a <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&amp;head, 0);
    add_nodeint(&amp;head, 1);
    add_nodeint(&amp;head, 2);
    add_nodeint(&amp;head, 3);
    add_nodeint(&amp;head, 4);
    add_nodeint(&amp;head, 98);
    add_nodeint(&amp;head, 402);
    add_nodeint(&amp;head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
julien@ubuntu:~/0x13. More singly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 3-add_nodeint_end.c

**<p>Function that adds a new node at the end of a <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
julien@ubuntu:~/0x13. More singly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 4-free_listint.c

**<p>Function that frees a <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./e 
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 5-free_listint2.c

**<p>Function that frees a <code>listint_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 5-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    free_listint2(&amp;head);
    printf("%p\n", (void *)head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./f 
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843== 
0
1
2
3
4
98
402
1024
(nil)
==3843== 
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843== 
==3843== All heap blocks were freed -- no leaks are possible
==3843== 
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 6-pop_listint.c

**<p>Function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node’s data (n).</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    n = pop_listint(&amp;head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&amp;head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&amp;head);
    printf("%p\n", (void *)head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./g 
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369== 
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369== 
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369== 
==4369== All heap blocks were freed -- no leaks are possible
==4369== 
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 7-get_nodeint.c

**<p>Function that returns the nth node of a <code>listint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 7-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node-&gt;n);
    print_listint(head);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
julien@ubuntu:~/0x13. More singly linked lists$ ./h 
0
1
2
3
4
98
402
1024
98
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 8-sum_listint.c

**<p>Function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 8-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/c0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
julien@ubuntu:~/0x13. More singly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 9-insert_nodeint.c

**<p>Function that inserts a new node at a given position.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 9-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&amp;head, 5, 4096);
    print_listint(head);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
julien@ubuntu:~/0x13. More singly linked lists$ ./j 
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
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 10-delete_nodeint.c

**<p>Function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 10-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 5);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./k 
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./k
==5571== 
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
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==5571== 
==5571== All heap blocks were freed -- no leaks are possible
==5571== 
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

### 100-reverse_listint.c

**<p>Function that reverses a <code>listint_t</code> linked list.</p>**

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 100-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    reverse_listint(&amp;head);
    print_listint(head);    
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./l 
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117== 
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117== 
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117== 
==3117== All heap blocks were freed -- no leaks are possible
==3117== 
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

