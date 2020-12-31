# 0x15. C - File I/O
In this directory you will learn how to use read, open close write in a file

## GENERAL:

1.  **Look for the right source of information online**
2.  **How to create, open, close, read and write files**
3.  **What are file descriptors**
4.  **What are the 3 standard file descriptors, what are their purpose and what are their POSIX names**
5.  **How to use the I/O system calls open, close, read and write**
6.  **What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR**
7.  **What are file permissions, and how to set them when creating a file with the open system call**
8.  **What is a system call**
9.  **What is the difference between a function and a system call**

## Read or watch:

1.    **[File descriptors](https://en.wikipedia.org/wiki/File_descriptor)**
2.    **[C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)**

## Files:

1.  **0-read_textfile.c**
2.  **1-create_file.c**
3.  **2-append_text_to_file.c**

## Tasks

### 0. Tread lightly, she is near

*   File: **0-read_textfile.c**

*Write a function that reads a text file and prints it to the POSIX standard output.*

1.  Prototype: ssize_t read_textfile(const char *filename, size_t letters);
2.  where letters is the number of letters it should read and print
3.  returns the actual number of letters it could read and print
4.  if the file can not be opened or read, return 0
5.  if filename is NULL return 0
6.  if write fails or does not write the expected amount of bytes, return 0

Example:

```
julien@ubuntu:~/0x15. File descriptors and permissions$ cat Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/0x15. File descriptors and permissions$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/0x15. File descriptors and permissions$ 
```

### 1. Under the snow 

*   File: **1-create_file.c**

*Create a function that creates a file.*

1.  Prototype: int create_file(const char *filename, char *text_content);
2.  where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
3.  Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
4.  The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
5.  if the file already exists, truncate it
6.  if filename is NULL return -1
7.  if text_content is NULL create an empty file

```
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b
julien@ubuntu:~/0x15. File descriptors and permissions$ ./b hello world
-> 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
worldjulien@ubuntu:~/0x15. File descriptors and permis$ 
```

###  2. Speak gently, she can hear 
*   File: **2-append_text_to_file.c**

*Write a function that appends text at the end of a file.*

1.  Prototype: int append_text_to_file(const char *filename, char *text_content);
2.  where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
3.  Return: 1 on success and -1 on failure
4.  Do not create the file if it does not exist
5.  If filename is NULL return -1
6.  If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

```
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x15. File descriptors and permissions$ cat 2-main.c
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ echo -n Hello > hello
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append_text_to_file.c -o c
julien@ubuntu:~/0x15. File descriptors and permissions$ ./c hello " World!
> "
-> 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
Hello World!
julien@ubuntu:~/0x15. File descriptors and permissions$
```
