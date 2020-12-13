# 0x05. C - Pointers, arrays and strings
In this directory you will learn how to use pointers, arrays and strings and ¿What is the meaning each one?

## GENERAL:

1.  What are pointers and how to use them
2.  What are arrays and how to use them
3.  What are the differences between pointers and arrays
4.  How to use strings and how to manipulate them
5.  Scope of variables


## Read or watch:

1.    Pointers and arrays: **https://intranet.hbtn.io/concepts/60**
2.    Data Structures: **https://intranet.hbtn.io/concepts/120**
3.    C - Arrays: **https://www.tutorialspoint.com/cprogramming/c_arrays.htm** 
4.    C - Pointers: **https://www.tutorialspoint.com/cprogramming/c_pointers.htm**
5.    C - Strings: **https://www.tutorialspoint.com/cprogramming/c_strings.htm**

## Files:

1.  **0-reset_to_98.c**
2.  **1-swap.c**
3.  **2-strlen.c**
4.  **3-puts.c**
5.  **4-print_rev.c**
6.  **5-rev_string.c**
7.  **6-puts2.c**
8.  **7-puts_half.c**
9.  **8-print_array.c**
10.  **9-strcpy.c**
11.  **100-atoi.c**
11.  **101-keygen.c**

## Tasks

### 0. 98 Battery st. 
*   File: **0-reset_to_98.c**

*Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.*

1.    Prototype: void reset_to_98(int *n);

Example:

```
julien@ubuntu:~/0x05$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 
```

### 1. Don't swap horses in crossing a stream 
*   File: **1-swap.c**

*Write a function that swaps the values of two integers.*

1.    Prototype: void swap_int(int *a, int *b);

```
julien@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
```

### 2. This report, by its very length, defends itself against the risk of being read 
*   File: **2-strlen.c**

*Write a function that returns the length of a string.*

1.  Prototype: int _strlen(char *s);  

```
julien@ubuntu:~/0x05$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
10
julien@ubuntu:~/0x05$ 
```

###  3. I do not fear computers. I fear the lack of them
*   File: **: 3-puts.c**

*Write a function that prints a string, followed by a new line, to stdout.*

1.  Prototype: void _puts(char *str);

```
julien@ubuntu:~/0x05$ cat 3-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 
```

###  4. I can only go one way. I've not got a reverse gear
*   File: **4-print_rev.c**

*Write a function that prints a string, in reverse, followed by a new line.*

1.  Prototype: void print_rev(char *s);

```
julien@ubuntu:~/0x05$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 
```

###   5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

* File: **5-rev_string.c**

*Write a function that reverses a string.*

1.  Prototype: void rev_string(char *s);

```
julien@ubuntu:~/0x05$ cat 5-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
Holberton
notrebloH
julien@ubuntu:~/0x05$ 
```

### 6. Half the lies they tell about me aren't true

*   File: **6-puts2.c**

*Write a function that prints every other character of a string, starting with the first character, followed by a new line.*

1.    Prototype: void puts2(char *str);

```
julien@ubuntu:~/0x05$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 
```


### 7. Winning is only half of it. Having fun is the other half 

*   File: **7-puts_half.c** 

*Write a function that prints half of a string, followed by a new line.*

1.  Prototype: void puts_half(char *str);
2.  The function should print the second half of the string
3.  If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```
julien@ubuntu:~/0x05$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
```

### 8. Arrays are not pointers  

*   File: **8-print_array.c**

*Write a function that prints n elements of an array of integers, followed by a new line.*

1.  Prototype: void print_array(int *a, int n);
2.  where n is the number of elements of the array to be printed
3.  Numbers must be separated by comma, followed by a space
4.  The numbers should be displayed in the same order as they are stored in the array
5.  You are allowed to use printf

```
julien@ubuntu:~/0x05$ cat 8-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
```

###  9. strcpy

*   File: **9-strcpy.c**

*Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest*

1.    Prototype: char *_strcpy(char *dest, char *src);
2.    Return value: the pointer to dest

```
julien@ubuntu:~/0x05$ cat 9-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", p);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 
```

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers #advanced

*   File: ****

*Write a function that convert a string to an integer.* 

1.  Prototype: int _atoi(char *s);
2.  The number in the string can be preceded by an infinite number of characters
3.  You need to take into account all the - and + signs before the number
4.  If there are no numbers in the string, the function must return 0
5.  You are not allowed to use long
6.  You are not allowed to declare new variables of “type” array
7.  You are not allowed to hard-code special values
8.  Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
9.  We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM
10. We will use GCC version 5 or above to compile - WARNING: it’s the only time you will use GCC 5, we highly recommend to create a new virtual machine for this task or use one of our container below.

```
julien@ubuntu:~/0x05$ cat 100-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
```
