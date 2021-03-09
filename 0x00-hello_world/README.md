# 0x00. C - Hello, World

## GENERAL:

 <ol>
	<li>Why C programming is awesome </li>
	<li>Who invented C</li>
	<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
	<li>What happens when you type <code>gcc main.c</code></li>
	<li>What is an entry point</li>
	<li>What is <code>main</code></li>
	<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code></li>
	<li>How to get the size of a specific type using the unary operator <code>sizeof</code></li>
	<li>How to compile using <code>gcc</code></li>
	<li>What is the default program name when compiling with <code>gcc</code></li>
	<li>What is the official Holberton C coding style and how to check your code with <code>betty-style</code></li>
	<li>How to find the right header to include in your source code when using a standard library function</li>
	<li>How does the <code>main</code> function influence the return value of the program</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/d6TBbj0HA4EvnmpqvEz68Q" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
	<li><a href="/rltoken/vY9KI1Ai38BUuydEfadtaA" title="Dennis Ritchie" target="_blank">Dennis Ritchie</a> </li>
	<li><a href="/rltoken/f5nVwIVoNRrnddbX-5h5rw" title='"C" Programming Language: Brian Kernighan' target="_blank">“C” Programming Language: Brian Kernighan</a> </li>
	<li><a href="/rltoken/J7yAaPGVuPoJI4iP1DuIPw" title="Why C Programming Is Awesome" target="_blank">Why C Programming Is Awesome</a> </li>
	<li><a href="/rltoken/AicyjqLinWdA9qxKsXBKjg" title="Learning to program in C part 1" target="_blank">Learning to program in C part 1</a> </li>
	<li><a href="/rltoken/1qtDStnOrOjrVseFa3jngA" title="Learning to program in C part 2" target="_blank">Learning to program in C part 2</a> </li>
	<li><a href="/rltoken/qM-SOqtf8ZnGxVtVWchAfg" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
	<li><a href="/rltoken/8c-wkUvvmuA_d5s4ktmnEw" title="Holberton's Betty Coding Style" target="_blank">Holberton’s Betty Coding Style</a> </li>
	<li><a href="/rltoken/7oODGrfLgAJJzoCbfBap3Q" title="Hash-bang under the hood" target="_blank">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
	<li><a href="/rltoken/8rYFkn82I0QlSygvC0u2Jw" title="Linus Torvalds on C vs. C++" target="_blank">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ol>

## INTRODUCTION TO FILES:

0.	[**0-preprocessor**:](#0-preprocessor)  script that runs a C file through the preprocessor and save the result into another file.
1.	[**1-compiler**:](#1-compiler)  script that compiles a C file but does not link.
2.	[**2-assembler**:](#2-assembler)  script that generates the assembly code of a C code and save it in an output file.
3.	[**3-name**:](#3-name)  script that compiles a C file and creates an executable named <code>cisfun</code>.
4.	[**4-puts.c**:](#4-putsc)  C program that prints exactly <code>"Programming is like building a multilingual puzzle</code>, followed by a new line.
5.	[**5-printf.c**:](#5-printfc)  C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.
6.	[**6-size.c**:](#6-sizec)  C program that prints the size of various types on the computer it is compiled and run on.
7.	[**100-intel**:](#100-intel)  script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
8.	[**101-quote.c**:](#101-quotec)  C program that prints exactly <code>and that piece of art is useful" - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.
## FILES:

### 0-preprocessor

*<p>script that runs a C file through the preprocessor and save the result into another file.</p>*

<ul>
	<li>The C file name will be saved in the variable <code>$CFILE</code></li>
	<li>The output should be saved in the file <code>c</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ cat main.c 
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 1-compiler

*<p>script that compiles a C file but does not link.</p>*

<ul>
	<li>The C file name will be saved in the variable <code>$CFILE</code></li>
	<li>The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.

<ul>
	<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@&gt;^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 
</code></pre>

### 2-assembler

*<p>script that generates the assembly code of a C code and save it in an output file.</p>*

<ul>
	<li>The C file name will be saved in the variable <code>$CFILE</code></li>
	<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
	<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 3-name

*<p>script that compiles a C file and creates an executable named <code>cisfun</code>.</p>*

<ul>
	<li>The C file name will be saved in the variable <code>$CFILE</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 4-puts.c

*<p>C program that prints exactly <code>"Programming is like building a multilingual puzzle</code>, followed by a new line.</p>*

<ul>
	<li>Use the function <code>puts</code></li>
	<li>It is not allowed to use <code>printf</code></li>
	<li>program should end with the value <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc 4-puts.c &amp;&amp; ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 5-printf.c

*<p>C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.</p>*

<ul>
	<li>Use the function <code>printf</code></li>
	<li>It is not allowed to use the function <code>puts</code></li>
	<li>program should return <code>0</code></li>
	<li>program should compile without warning when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 6-size.c

*<p>C program that prints the size of various types on the computer it is compiled and run on.</p>*

<ul>
	<li>You should produce the exact same output as in the example</li>
	<li>Warnings are allowed</li>
	<li>program should return <code>0</code></li>
	<li>You might have to install the package  <code>libc6-dev-i386</code> on your Linux (Vagrant) to test the <code>-m32</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2&gt; /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2&gt; /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 100-intel

*<p>script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p>*

<ul>
	<li>The C file name will be saved in the variable <code>$CFILE</code>.</li>
	<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
	<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 
</code></pre>

### 101-quote.c

*<p>C program that prints exactly <code>and that piece of art is useful" - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.</p>*

<ul>
	<li>It is not allowed to use any functions listed in the NAME section of the man (3) <code>printf</code> or man (3) <code>puts</code></li>
	<li>program should return 1</li>
	<li>program should compile without any warnings when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2&gt; q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf &lt; 101-quote.c
julien@ubuntu:~/c/0x00$ grep put &lt; 101-quote.c
julien@ubuntu:~/c/0x00$ 
</code></pre>
