0x04. C - More functions, more nested loops
In this directory you will see more functions and more nested loops

## GENERAL:

1.  What are nested loops and how to use them
2.  What is a function and how do you use functions
3.  What is the difference between a declaration and a definition of a function
4.  What is a prototype
5.  Scope of variables
6.  What are the gcc flags -Wall -Werror -pedantic -Wextra
7.  What are header files and how to to use them with #include


## Read or watch:

1.  Nested while loops: **https://www.youtube.com/watch?v=Z3iGeQ1gIss**
2.  C - Functions: **https://www.tutorialspoint.com/cprogramming/c_functions.htm**
3.  Learning to Program in C (Part 06) (stop at 14:00): **https://www.youtube.com/watch?v=qMlnFwYdqIw**
4.  What is the purpose of a function prototype?: **https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/**
5.  C - Header Files (stop before the “Once-Only Headers” paragraph): **https://www.tutorialspoint.com/cprogramming/c_header_files.htm**

## Files:

1.  **0-isupper.c**
2.  **1-isdigit.c**
3.  **2-mul.c**
4.  **3-print_numbers.c**
5.  **4-print_most_numbers.c**
6.  **5-more_numbers.c**
7.  **6-print_line.c**
8.  **7-print_diagonal.c**
9.  **8-print_square.c**
10.  **9-fizz_buzz.c**
12.  **10-print_triangle.c**
13.  **100-prime_factor.c**
14.  **100-prime_factor.c**


## Tasks

### 0. isupper 
*   File: **0-isupper.c**

*Write a function that checks for uppercase character.*

1.  Prototype: int _isupper(int c);
2.  Returns 1 if c is uppercase
3.  Returns 0 otherwise

Example:

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
```

### 1. isdigit 
*   File: **1-isdigit.c**

*Write a function that checks for a digit (0 through 9).*

1.  Prototype: int _isdigit(int c);
2.  Returns 1 if c is a digit
3.  Returns 0 otherwise

```
julien@ubuntu:~/0x04$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
```

###  2. Collaboration is multiplication 
*   File: **2-mul.c**

*Write a function that multiplies two integers.*

1.    Prototype: int mul(int a, int b);

```
julien@ubuntu:~/0x04$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
```

###  3. The numbers speak for themselves
*   File: **3-print_numbers.c**

*Write a function that prints the numbers, from 0 to 9, followed by a new line.*

1.  Prototype: void print_numbers(void);
2.  You can only use _putchar twice in your code

```
julien@ubuntu:~/0x04$ cat 3-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$ 
```

###  4. I believe in numbers and signs
*   File: **4-print_most_numbers.c**

*Write a function that prints the numbers, from 0 to 9, followed by a new line.*

1.  Prototype: void print_most_numbers(void);
2.  Do not print 2 and 4
3.  You can only use _putchar twice in your code

```
julien@ubuntu:~/0x04$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/0x04$ 
```

###   5. Numbers constitute the only universal language 
* File: **5-more_numbers.c**

*Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.*

1.  Prototype: void more_numbers(void);
2.  You can only use _putchar three times in your code

```
julien@ubuntu:~/0x04$ cat 5-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04
```

### 6. The shortest distance between two points is a straight line
*   File: **6-print_line.c**

*Write a function that draws a straight line in the terminal.*

1.  Prototype: void print_line(int n);
2.  You can only use _putchar function to print
3.  Where n is the number of times the character _ should be printed
4.  The line should end with a \n
5.  If n is 0 or less, the function should only print \n

```
julien@ubuntu:~/0x04$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$ 
```


### 7. I feel like I am diagonally parked in a parallel universe
*   File: **7-print_diagonal.c** 

*Write a function that draws a diagonal line on the terminal.*

1.  Prototype: void print_diagonal(int n);
2.  You can only use _putchar function to print
3.  Where n is the number of times the character \ should be printed
4.  The diagonal should end with a \n
5.  If n is 0 or less, the function should only print a \n

```
julien@ubuntu:~/0x04$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$ 
```

### 8. You are so much sunshine in every square inch
*   File: **8-print_square.c**

*Write a function that prints a square, followed by a new line.*

1.  Prototype: void print_square(int size);
2.  You can only use _putchar function to print
3.  Where size is the size of the square
4.  If size is 0 or less, the function should print only a new line
5.  Use the character # to print the square

```
julien@ubuntu:~/0x04$ cat 8-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$ 
```

###  9. Fizz-Buzz 
*   File: **9-fizz_buzz.c**

*The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.*

1.  Each number or word should be separated by a space
2.  You are allowed to use the standard library

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$ 
```

### 10. Triangles 
*   File: **10-print_triangle.c**

*Write a function that prints a triangle, followed by a new line.* 

1.  Prototype: void print_triangle(int size);
2.  You can only use _putchar function to print
3.  Where size is the size of the triangle
4.  If size is 0 or less, the function should print only a new line
5.  Use the character # to print the triangle  

```
julien@ubuntu:~/0x04$ cat 10-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
```


## Tasks

### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic 

*   File: **100-prime_factor.c**

*The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.*

1.  You are allowed to use the standard library
2.  Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm

Example:

```
functions_nested_loops$ gcc -o execute 100-prime_factor.c
vagrant@vagrant-ubuntu-trusty-64:~/holbertonschool-low_level_programming/0x04-more_functions_nested_loops$ ./execute
50829599
vagrant@vagrant-ubuntu-trusty-64:~/holbertonschool-low_level_programming/0x04-more_functions_nested_loops$
```


## Tasks

### 12. Numbers have life; they're not just symbols on paper 

*   File: **101-print_number.c**

*Write a function that prints an integer.*

1.  Prototype: void print_number(int n);
2.  You can only use _putchar function to print
3.  You are not allowed to use long
4.  You are not allowed to use arrays or pointers
5.  You are not allowed to hard-code special values

Example:

```
julien@ubuntu:~/0x04$ cat 101-main.c
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
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x04$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x04$ 
```
