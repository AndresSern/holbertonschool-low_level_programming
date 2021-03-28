# 0x12. C - Singly linked lists

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>When and why using linked lists vs arrays</li>
	<li>How to build and use linked lists</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/2WOe5XO84Puxd4Y1FUJwVQ" title="Linked Lists" target="_blank">Linked Lists</a> </li>
	<li><a href="/rltoken/jiyCC9L1Axkl_nEmuh4j3w" title="Google" target="_blank">Google</a> </li>
	<li><a href="/rltoken/DcEVPdONWy2p1x8XPH53Uw" title="Youtube" target="_blank">Youtube</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-print_list.c**:](#0-print_listc) Function that prints all the elements of a <code>list_t</code> list.
1.	[**1-list_len.c**:](#1-list_lenc) Function that returns the number of elements in a linked <code>list_t</code> list.
2.	[**2-add_node.c**:](#2-add_nodec) Function that adds a new node at the beginning of a <code>list_t</code> list.<em>^ Cohort 0, San Francisco students</em>
3.	[**3-add_node_end.c**:](#3-add_node_endc) Function that adds a new node at the end of a <code>list_t</code> list.
4.	[**4-free_list.c**:](#4-free_listc) Function that frees a <code>list_t</code> list.
5.	[**100-first.c**:](#100-firstc) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2020/9/de3291ccf5b255fff6ce37bfde7a13f481e7ed0c.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T173500Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=252774984fc819c399c2a286123603ea340aed1fdcca2241ed18a5cedd945230" alt="" style="">Function that prints <code>You're beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

###  0-print_list.c

**<p>Function that prints all the elements of a <code>list_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
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
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new-&gt;str = strdup("Hello");
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = print_list(head);
    printf("-&gt; %lu elements\n", n);

    printf("\n");
    free(new-&gt;str);
    new-&gt;str = NULL;
    n = print_list(head);
    printf("-&gt; %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-&gt; 2 elements

[0] (nil)
[5] World
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

### 1-list_len.c

**<p>Function that returns the number of elements in a linked <code>list_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
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
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new-&gt;str = strdup("Hello");
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = list_len(head);
    printf("-&gt; %lu elements\n", n);
    free(new-&gt;str);
    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

### 2-add_node.c

**<p>Function that adds a new node at the beginning of a <code>list_t</code> list.</p><p><em>^ Cohort 0, San Francisco students</em></p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
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
    list_t *head;

    head = NULL;
    add_node(&amp;head, "Alexandro");
    add_node(&amp;head, "Asaia");
    add_node(&amp;head, "Augustin");
    add_node(&amp;head, "Bennett");
    add_node(&amp;head, "Bilal");
    add_node(&amp;head, "Chandler");
    add_node(&amp;head, "Damian");
    add_node(&amp;head, "Daniel");
    add_node(&amp;head, "Dora");
    add_node(&amp;head, "Electra");
    add_node(&amp;head, "Gloria");
    add_node(&amp;head, "Joe");
    add_node(&amp;head, "John");
    add_node(&amp;head, "John");
    add_node(&amp;head, "Josquin");
    add_node(&amp;head, "Kris");
    add_node(&amp;head, "Marine");
    add_node(&amp;head, "Mason");
    add_node(&amp;head, "Praylin");
    add_node(&amp;head, "Rick");
    add_node(&amp;head, "Rick");
    add_node(&amp;head, "Rona");
    add_node(&amp;head, "Siphan");
    add_node(&amp;head, "Sravanthi");
    add_node(&amp;head, "Steven");
    add_node(&amp;head, "Tasneem");
    add_node(&amp;head, "William");
    add_node(&amp;head, "Zee");
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

### 3-add_node_end.c

**<p>Function that adds a new node at the end of a <code>list_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 3-main.c
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
    list_t *head;

    head = NULL;
    add_node_end(&amp;head, "Anne");
    add_node_end(&amp;head, "Colton");
    add_node_end(&amp;head, "Corbin");
    add_node_end(&amp;head, "Daniel");
    add_node_end(&amp;head, "Danton");
    add_node_end(&amp;head, "David");
    add_node_end(&amp;head, "Gary");
    add_node_end(&amp;head, "Holden");
    add_node_end(&amp;head, "Ian");
    add_node_end(&amp;head, "Ian");
    add_node_end(&amp;head, "Jay");
    add_node_end(&amp;head, "Jennie");
    add_node_end(&amp;head, "Jimmy");
    add_node_end(&amp;head, "Justin");
    add_node_end(&amp;head, "Kalson");
    add_node_end(&amp;head, "Kina");
    add_node_end(&amp;head, "Matthew");
    add_node_end(&amp;head, "Max");
    add_node_end(&amp;head, "Michael");
    add_node_end(&amp;head, "Ntuj");
    add_node_end(&amp;head, "Philip");
    add_node_end(&amp;head, "Richard");
    add_node_end(&amp;head, "Samantha");
    add_node_end(&amp;head, "Stuart");
    add_node_end(&amp;head, "Swati");
    add_node_end(&amp;head, "Timothy");
    add_node_end(&amp;head, "Victor");
    add_node_end(&amp;head, "Walton");
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/0x12. Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

### 4-free_list.c

**<p>Function that frees a <code>list_t</code> list.</p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 4-main.c
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
    list_t *head;

    head = NULL;
    add_node_end(&amp;head, "Bob");
    add_node_end(&amp;head, "&amp;");
    add_node_end(&amp;head, "Kris");
    add_node_end(&amp;head, "love");
    add_node_end(&amp;head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x12. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &amp;
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

### 100-first.c

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2020/9/de3291ccf5b255fff6ce37bfde7a13f481e7ed0c.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T173500Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=252774984fc819c399c2a286123603ea340aed1fdcca2241ed18a5cedd945230" alt="" style=""></p><p>Function that prints <code>You're beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>**

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 100-main.c
#include &lt;stdio.h&gt;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-first.c -o first
julien@ubuntu:~/$ ./first 
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
julien@ubuntu:~/$ 
</code></pre>

