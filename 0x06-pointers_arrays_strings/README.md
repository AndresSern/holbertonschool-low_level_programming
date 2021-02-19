# 0x06. C - More pointers, arrays and strings
In this directory you will learn how to use pointers, arrays and strings and ¿What is the meaning each one?

## GENERAL:

1.  What are pointers and how to use them
2.  What are arrays and how to use them
3.  What are the differences between pointers and arrays
4.  How to use strings and how to manipulate them
5.  Scope of variables


## Read or watch:

1.    **[Pointers and arrays:](https://intranet.hbtn.io/concepts/60)**
2.    **[Data Structures:](https://intranet.hbtn.io/concepts/120)**
3.    **[C - Arrays:](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)** 
4.    **[C - Pointers:](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)**
5.    **[C - Strings:](https://www.tutorialspoint.com/cprogramming/c_strings.htm)**

## Files:

1.  **0-strcat.c **
2.  **1-strncat.c**
3.  **2-strncpy.c**
4.  **3-strcmp.c**
5.  **4-rev_array.c**
6.  **5-string_toupper.c**
7.  **6-cap_string.c**
8.  **7-leet.c**
9.  **8-rot13.c**
10.  **100-print_number.c**
11.  **101-magic.c **

## Tasks

### 0. strcat
*   File: **0-strcat.c**

*Write a function that concatenates two strings.*

1.  Prototype: char *_strcat(char *dest, char *src);
2.  This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
3.  Returns a pointer to the resulting string dest  

Example:

```
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", p);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
```

### 1. strncat  
*   File: ****

*Write a function that concatenates two strings.*

1.  Prototype: char *_strncat(char *dest, char *src, int n);
2.  The _strncat function is similar to the _strcat function, except that
     - it will use at most n bytes from src; and
     - src does not need to be null-terminated if it contains n or more bytes    
3.  Return a pointer to the resulting string dest

```
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", p);
    p = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", p);
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

```

###  2. strncpy  
*   File: **2-strncpy.c**

*Write a function that copies a string.*

1.  Prototype: char *_strncpy(char *dest, char *src, int n);
2.  Your function should work exactly like strncpy

```
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char s1[98];
    char *p;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", p);
    p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", p);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
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
```

###  3. strcmp 
*   File: **3-strcmp.c**

*Write a function that compares two strings.*

1.  Prototype: int _strcmp(char *s1, char *s2);
2.  Your function should work exactly like strcmp

```
julien@ubuntu:~/0x06$ cat 3-main.c
#include "holberton.h"
#include <stdio.h>
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
```

###  4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy 
*   File: **4-rev_array.c**

*rite a function that reverses the content of an array of integers.*

1.  Prototype: void reverse_array(int *a, int n);
2.  Where n is the number of elements of the array

```
#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
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
```

###   5. Always look up
* File: **5-string_toupper.c**

*Write a function that changes all lowercase letters of a string to uppercase.*

1.  Prototype: char *string_toupper(char *);

```
julien@ubuntu:~/0x06$ cat 5-main.c
#include "holberton.h"
#include <stdio.h>


int main(void)
{
    char s[] = "Holberton School!\n";
    char *p;

    p = string_toupper(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper 
HOLBERTON SCHOOL!
HOLBERTON SCHOOL!
julien@ubuntu:~/0x06$ 
```

### 6. Expect the best. Prepare for the worst. Capitalize on what comes 
*   File: **6-cap_string.c**

*Write a function that capitalizes all words of a string.*

1.  Prototype: char *cap_string(char *);
2.  Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

```
julien@ubuntu:~/0x06$ cat 6-main.c
#include "holberton.h"
#include <stdio.h>
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *p;

    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x06$ 
```


### 7. Mozart composed his music not for the elite, but for everybody mandatory
*   File: **7-leet.c** 

*Write a function that encodes a string into 1337.*

1.  Letters a and A should be replaced by 4
2.  Letters e and E should be replaced by 3
3.  Letters o and O should be replaced by 0
4.  Letters t and T should be replaced by 7
5.  Letters l and L should be replaced by 1
6.  Prototype: char *leet(char *);
7.  You can only use one if in your code
8.  You can only use two loops in your code
9.  You are not allowed to use switch
10.  You are not allowed to use any ternary operation

```
julien@ubuntu:~/0x06$ cat 7-main.c
#include "holberton.h"
#include <stdio.h>
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
```

### 8. rot13 
*   File: **8-rot13.c**

*Write a function that encodes a string using rot13.*

1.  Prototype: char *rot13(char *);
2.  You can only use if statement once in your code
3.  You can only use two loops in your code
4.  You are not allowed to use switch
5.  You are not allowed to use any ternary operation

```
#include "holberton.h"
#include <stdio.h>
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
```

###  9. Numbers have life; they're not just symbols on paper  
*   File: **100-print_number.c**

*Write a function that prints an integer.*

Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values

```
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
```
