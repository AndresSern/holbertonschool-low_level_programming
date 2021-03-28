# 0x0E. C - Structures, typedef

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are structures, when, why and how to use them</li>
	<li>How to use <code>typedef</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/Rc1JAo6IS9HkELfLUylh2g" title="0x0d. Structures.pdf" target="_blank">0x0d. Structures.pdf</a></li>
	<li><a href="/rltoken/sF_gQY2e9CP95XbgWQkduA" title="struct (C programming language)" target="_blank">struct (C programming language)</a> </li>
	<li><a href="/rltoken/7VySR2oMyxk7VMR8LLOvZA" title="Documentation: structures" target="_blank">Documentation: structures</a> </li>
	<li><a href="/rltoken/kef9P9qRh_co4dxwHU8QGA" title="0x0d. Typedef and structures.pdf" target="_blank">0x0d. Typedef and structures.pdf</a></li>
	<li><a href="/rltoken/-vbMNPFrIA5PcVs4RiWr4g" title="typedef" target="_blank">typedef</a> </li>
	<li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em></li>
	<li><a href="/rltoken/92gDeb3TtzgLDpzo9DXfZg" title="The Lost Art of C Structure Packing" target="_blank">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**dog.h**:](#dogh) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=d635485df340c9bd279d1747e6a301b180273ce3266e68995b72c7c61e33c7fb" alt="" style="width 450px">Define a new type <code>struct dog</code> with the following elements
1.	[**1-init_dog.c**:](#1-init_dogc) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/cdd1d618025642db8f78dac0809f1e4b0a5449f6.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=ed9120343b95c7a6c63935be968abf991444e2b779a5ae2a071bf960551f3425" alt="" style="width 450px">Function that initialize a variable of type <code>struct dog</code>
2.	[**2-print_dog.c**:](#2-print_dogc) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=da2d8c2b193935994b77a193a8469bbd8dc8f0a3193c461e5aacd5b63ba9c07c" alt="" style="width 450px">Function that prints a <code>struct dog</code>
3.	[**dog.h**:](#dogh) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=b0092484d50a84cb5df83f7ff4198f76538fd0900accec3a5afa08492e135d74" alt="" style="width 450px">Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.
4.	[**5-free_dog.c**:](#5-free_dogc) <img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=da7016eafb747cb635f364a6eeffbdbb20e43ee4405dd1cfae5cf5ff48d2144f" alt="" style="width 450px">Function that frees dogs.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### dog.h

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=d635485df340c9bd279d1747e6a301b180273ce3266e68995b72c7c61e33c7fb" alt="" style="width 450px"></p><p>Define a new type <code>struct dog</code> with the following elements</p>**

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ make
gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

### 1-init_dog.c

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/cdd1d618025642db8f78dac0809f1e4b0a5449f6.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=ed9120343b95c7a6c63935be968abf991444e2b779a5ae2a071bf960551f3425" alt="" style="width 450px"></p><p>Function that initialize a variable of type <code>struct dog</code></p>**

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&amp;my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

### 2-print_dog.c

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=da2d8c2b193935994b77a193a8469bbd8dc8f0a3193c461e5aacd5b63ba9c07c" alt="" style="width 450px"></p><p>Function that prints a <code>struct dog</code></p>**

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&amp;my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

### dog.h

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=b0092484d50a84cb5df83f7ff4198f76538fd0900accec3a5afa08492e135d74" alt="" style="width 450px"></p><p>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.</p>**

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

### 5-free_dog.c

**<p><img src="https//holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUWMNL5ANN%2F20210328%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20210328T165931Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=da7016eafb747cb635f364a6eeffbdbb20e43ee4405dd1cfae5cf5ff48d2144f" alt="" style="width 450px"></p><p>Function that frees dogs.</p>**

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog-&gt;name, my_dog-&gt;age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

