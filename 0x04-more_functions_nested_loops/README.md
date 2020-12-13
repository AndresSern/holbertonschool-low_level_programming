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

### 6. 
*   File: ****

**

1.    
2.    
3.    
4.    
5.    
6.    

```

```


### 7. 
*   File: **** 

**

1.  
2.  
3.  
4.  
5.  
6.  

```

```

### 8. 
*   File: ****

**

1.    
2.    
3.    
4.    
5.    
6.      

```

```

###  9.  
*   File: ****

**

1.    
2.    
3.    
4.    
5.    
6.    

```

```

### 10. 
*   File: ****

** 
1.    
2.    
3.    
4.    
5.    
6.    

```

```
