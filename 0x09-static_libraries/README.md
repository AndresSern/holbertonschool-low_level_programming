# 0x09. C - Static libraries

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is a static library, how does it work, how to create one, and how to use it</li>
	<li>Basic usage of <code>ar</code>, <code>ranlib</code>, <code>nm</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" title='What Is A "C" Library? What Is It Good For?' target="_blank">What Is A “C” Library? What Is It Good For?</a> </li>
	<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" title='Creating A Static "C" Library Using "ar" and "ranlib"' target="_blank">Creating A Static “C” Library Using “ar” and “ranlib”</a> </li>
	<li><a href="/rltoken/4Dki8HiSS6QBDwsznMbXFA" title='Using A "C" Library In A Program' target="_blank">Using A “C” Library In A Program</a> </li>
	<li><a href="/rltoken/wC9HCOvJwa_Co1nZuL4QMA" title="What is difference between Dynamic and Static library(Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library(Static and Dynamic linking)</a> (<em>stop at 4:44</em>)</li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**libholberton.a**:](#libholbertona) Create the static library <code>libholberton.a</code> containing all the functions listed belowIf you haven’t coded all of the above functions create empty ones with the right prototype.<br>
Don’t forget to push your <code>holberton.h</code> file to your repository. It should at least contain all the prototypes of the above functions.
1.	[**create_static_lib.sh**:](#create_static_libsh) Create a script called <code>create_static_lib.sh</code> that creates a static library called <code>liball.a</code> from all the <code>.c</code> files that are in the current directory.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### libholberton.a

**<p>Create the static library <code>libholberton.a</code> containing all the functions listed below</p><p>If you haven’t coded all of the above functions create empty ones with the right prototype.<br>
Don’t forget to push your <code>holberton.h</code> file to your repository. It should at least contain all the prototypes of the above functions.</p>**

<pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre>

### create_static_lib.sh

**<p>Create a script called <code>create_static_lib.sh</code> that creates a static library called <code>liball.a</code> from all the <code>.c</code> files that are in the current directory.</p>**

<pre><code>julien@ubuntu:~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/0x09. Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ 
</code></pre>

