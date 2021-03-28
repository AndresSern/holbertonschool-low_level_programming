# 0x0A. C - argc, argv

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>How to use arguments passed to your program</li>
	<li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other</li>
	<li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/9qSBELMTQW1ldB0yGS6VZQ" title="Arguments to main" target="_blank">Arguments to main</a> </li>
	<li><a href="/rltoken/WL2UmZcO4fWhIgW-a1vePg" title="argc and argv" target="_blank">argc and argv</a> </li>
	<li><a href="/rltoken/hWES8SJFzZJeWm0bBC5v8A" title="What does argc and argv mean?" target="_blank">What does argc and argv mean?</a> </li>
	<li><a href="/rltoken/k7iIVMXLkWDm2D2ATHb6xw" title="how to compile with unused variables" target="_blank">how to compile with unused variables</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-whatsmyname.c**:](#0-whatsmynamec) Program that prints its name, followed by a new line.
1.	[**1-args.c**:](#1-argsc) Program that prints the number of arguments passed into it.
2.	[**2-args.c**:](#2-argsc) Program that prints all arguments it receives.
3.	[**3-mul.c**:](#3-mulc) Program that multiplies two numbers.
4.	[**4-add.c**:](#4-addc) Program that adds positive numbers.
5.	[**100-change.c**:](#100-changec) Program that prints the minimum number of coins to make change for an amount of money.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-whatsmyname.c

**<p>Program that prints its name, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

### 1-args.c

**<p>Program that prints the number of arguments passed into it.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

### 2-args.c

**<p>Program that prints all arguments it receives.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

### 3-mul.c

**<p>Program that multiplies two numbers.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

### 4-add.c

**<p>Program that adds positive numbers.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

### 100-change.c

**<p>Program that prints the minimum number of coins to make change for an amount of money.</p>**

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

