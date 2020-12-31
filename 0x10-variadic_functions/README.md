# 0x0B. C - malloc, free
In this directory you will learn how to use malloc and free

## GENERAL:

1.  What are variadic functions
2.  How to use va_start, va_arg and va_end macros
3.  Why and how to use the const type qualifier

## Read or watch:

1.    **[stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)**
2.    **[C - Variable Arguments](https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm)**
3.    **[Functions with Variable Argument Lists in C using va_list](https://www.cprogramming.com/tutorial/c/lesson17.html)**
4.    **[Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)**
5.    **[Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)**

## Files:

1.  **0-sum_them_all.c**
2.  **1-print_numbers.c**
3.  **2-print_strings.c**
4.  **3-print_all.c**

## Tasks

### 0. Beauty is variable, ugliness is constant 
*   File: **0-sum_them_all.c**

*Write a function that returns the sum of all its parameters.*

1.  Prototype: int sum_them_all(const unsigned int n, ...);
2.  If n == 0, return 0 

Example:

```
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 

```

### 1. To be is to be the value of a variable 

*   File: **1-print_numbers.c**

*Write a function that prints numbers, followed by a new line.*

1.  Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
2.  where separator is the string to be printed between numbers
3.  and n is the number of integers passed to the function
4.  You are allowed to use printf
5.  If separator is NULL, don’t print it
6.  Print a new line at the end of your function  

```
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```

###  2. One woman's constant is another woman's variable 

*   File: **2-print_strings.c**

*Write a function that prints strings, followed by a new line.*

1.  Prototype: void print_strings(const char *separator, const unsigned int n, ...);
2.  where separator is the string to be printed between the strings
3.  and n is the number of strings passed to the function
4.  You are allowed to use printf
5.  If separator is NULL, don’t print it
6.  If one of the string is NULL, print (nil) instead
7.  Print a new line at the end of your function

```
julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
```

###  3. To be is a to be the value of a variable 
*   File: **3-print_all.c**

*Write a function that prints anything.*

1.  Prototype: void print_all(const char * const format, ...);
2.  where format is a list of types of arguments passed to the function
     - c: char
     - i: integer
     - f: float
     - s: char * (if the string is NULL, print (nil) instead 
     - any other char should be ignored
     - see example
3.  You are not allowed to use for, goto, ternary operator, else, do ... while
4.  You can use a maximum of
     - 2 while loops
     - 2 if
5.  You can declare a maximum of 9 variables
6.  You are allowed to use printf
7.  Print a new line at the end of your function


```
julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
H, 0, lberton
julien@ubuntu:~/0x0f. Variadic functions$ 

```

