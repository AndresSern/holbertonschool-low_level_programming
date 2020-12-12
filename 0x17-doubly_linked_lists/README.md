# 0X01 VARIABLES IF ELSE AND WHILE
In this directory you will learn how to use conditional if, and the while and for loop and differentiate each one

```
gcc -Wall -pedantic -Werror -Wextra file_name -o output_file_name
```

## Read or watch:

*   Everything you need to know to start with C  **https://docs.google.com/presentation/d/1ghto-TsXqgPRuEVmiCp7GvGttobdTLF4Yq8IRXwzvHY/edit#slide=id.p**
*   Keywords and identifiers **https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html**
*   integers **https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html**
*   Arithmetic Operators in C **https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm**
*   If statements in C **https://www.cprogramming.com/tutorial/c/lesson2.html**
*   if…else statement **https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm**
*   Relational operators **https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm**
*   Logical operators **https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/**
*   while loop in C **https://www.youtube.com/watch?v=Ju1LYO9pkaI**
*   While loop **https://www.tutorialspoint.com/cprogramming/c_while_loop.htm**

## Files:

1.  **0-positive_or_negative.c**: This program will assign a random number to the variable n each time it is executed.
2.  **1-last_digit.c** : This program will assign a random number to the variable n each time it is executed.
3.  **10-print_comb2.c** : Write a program that prints the numbers from 00 to 99.
4.  **100-print_comb3.c** : Write a program that prints all possible different combinations of two digits.
5.  **101-print_comb4.c** : Write a program that prints all possible different combinations of three digits.
6.  **102-print_comb5.c** : Write a program that prints all possible combinations of two two-digit numbers.
7.  **2-print_alphabet.c** : Write a program that prints the alphabet in lowercase, followed by a new line.
8.  **3-print_alphabets.c** : Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
9.  **4-print_alphabt.c** : Write a program that prints the alphabet in lowercase, followed by a new line.
10.  **5-print_numbers.c** : Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
11.  **6-print_numberz.c** : Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
12.  **7-print_tebahpla.c** : Write a program that prints the lowercase alphabet in reverse, followed by a new line.
13.  **8-print_base16.c** : Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
14.  **9-print_comb.c** : Write a program that prints all possible combinations of single-digit numbers.

## Tasks

### 0\. Positive anything is better than negative nothing
*   File: **0-positive\_or\_negative.c**

*This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print 
  whether the number stored in the variable n is positive or negative.*

1.  The variable n will store a different value every time you will run this program
2.  You don’t have to understand what rand, srand, RAND\_MAX do. Please do not touch this code
3.  The output of the program should be:
4.  The number, followed by
    - if the number is greater than 0: is positive
    - if the number is 0: is zero
    - if the number is less than 0: is negative
5.  Followed by a new line

Example:
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
```

### 1\. The last digit
*   File: **1-last\_digit.c**

*This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print 
  the last digit of the number stored in the variable n.*

1.  The variable n will store a different value every time you run this program
2.  You don’t have to understand what rand, srand, and RAND\_MAX do. Please do not touch this code
3.  The output of the program should be:
     - The string Last digit of, followed by 
     - N, followed by
     - The string is, followed by
         - If the last digit of n is greater than 5: the string and is greater than 5
         - If the last digit of n is 0: the string and is 0
         - If the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
* Followed by a new line

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
```

### 2\. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
*   File: **2-print\_alphabet.c**

*Write a program that prints the alphabet in lowercase, followed by a new line.*

1.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
2.  All your code should be in the main function
3.  You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
```

### 3\. alphABET
*   File: **3-print\_alphabets.c**

*Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.*

1.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
2.  All your code should be in the main function
3.  You can only use putchar three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
```

### 4\. When I was having that alphabet soup, I never thought that it would pay off
*   File: **4-print\_alphabt.c**

*Write a program that prints the alphabet in lowercase, followed by a new line.*

1.  Print all the letters except q and e
2.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
3.  All your code should be in the main function
4.  You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
```

### 5\. Numbers
* File: **5-print\_numbers.c**
*Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.*

1.  All your code should be in the main function  

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
```

### 6\. Numberz
*   File: **6-print\_numberz.c**

*Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.*

1.  You are not allowed to use any variable of type char
2.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
3.  You can only use putchar twice in your code
4.  All your code should be in the main function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
```


### 7\. Smile in the mirror
*   File: **7-print\_tebahpla.c**

*Write a program that prints the lowercase alphabet in reverse, followed by a new line.*

1.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
2.  All your code should be in the main function
3.  You can only use putchar twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
```

### 8\. Hexadecimal
*   File: **8-print\_base16.c**

*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.*

1.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
2.  All your code should be in the main function
3.  You can only use putchar three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
```

### 9\. Patience, persistence and perspiration make an unbeatable combination for success
*   File: **9-print\_comb.c**

*Write a program that prints all possible combinations of single-digit numbers.*

1.   Numbers must be separated by ,, followed by a space
2.   Numbers should be printed in ascending order
3.   You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
4.   All your code should be in the main function
5.   You can only use putchar four times maximum in your code
6.   You are not allowed to use any variable of type char

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
```

### 10\. 00...99
*   File: **10-print\_comb2.c**

*Write a program that prints the numbers from 00 to 99.*

1.   Numbers must be separated by ,, followed by a space
2.   Numbers should be printed in ascending order, with two digits
3.   You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
4.   You can only use putchar five times maximum in your code
5.   You are not allowed to use any variable of type char
6.   All your code should be in the main function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
julien@ubuntu:~/0x01$ ./10-print_comb2 
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
julien@ubuntu:~/0x01$ 
```

### 11. Inventing is a combination of brains and materials. The more brains you use, the less material you need Patience, persistence and perspiration make an unbeatable combination for success
*   File: **100-print_comb3.c**

*Write a program that prints all possible different combinations of two digits.*

1.  Numbers must be separated by ,, followed by a space
2.  The two digits must be different
3.  01 and 10 are considered the same combination of the two digits 0 and 1
4.  Print only the smallest combination of two digits
6.  Numbers should be printed in ascending order, with two digits
7.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
8.  You can only use putchar five times maximum in your code
9.  You are not allowed to use any variable of type char
10.  All your code should be in the main function


```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
```

### 12. The success combination in business is: Do what you do better... and: do more of what you do... 
*   File: **101-print_comb4.c**

*Write a program that prints all possible different combinations of three digits.*

1.  Numbers must be separated by ,, followed by a space
2.  The three digits must be different
3.  012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
4.  Print only the smallest combination of three digits
5.  Numbers should be printed in ascending order, with three digits
6.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
7.  You can only use putchar six times maximum in your code
8.  You are not allowed to use any variable of type char
9.  All your code should be in the main function


```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
```


### 13. Software is eating the World 
*   File: **102-print_comb5.c**

*Write a program that prints all possible combinations of two two-digit numbers.*

1.  The numbers should range from 0 to 99
2.  The two numbers should be separated by a space
3.  All numbers should be printed with two digits. 1 should be printed as 01
4.  The combination of numbers must be separated by comma, followed by a space
5.  The combinations of numbers should be printed in ascending order
6.  00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
7.  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
8.  You can only use putchar eight times maximum in your code
9.  You are not allowed to use any variable of type char
10.  All your code should be in the main function


```
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ gcc -Wall -pedantic -Werror -Wextra 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
