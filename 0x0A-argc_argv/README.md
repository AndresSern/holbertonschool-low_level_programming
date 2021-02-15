#  0x0A. C - argc, argv
In this directory you will learn how to use argc and argv in the function main

## GENERAL:

1.  How to use arguments passed to your program
2.  What are two prototypes of main that you know of, and in which case do you use one or the other
3.  How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Read or watch:

1.    **[Arguments to main:](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)**
2.    **[argc and argv:](http://crasseux.com/books/ctutorial/argc-and-argv.html)**
3.    **[What does argc and argv mean?:](https://www.youtube.com/watch?v=aP1ijjeZc24)** 
4.    **[how to compile with unused variables:](https://www.google.com/webhp?q=unused+variable+C)**


## Files:

1.  **0-whatsmyname.c**
2.  **1-args.c**
3.  **2-args.c**
4.  **3-mul.c**
5.  **4-add.c**
6.  **100-change.c**

## Tasks

### 0. It ain't what they call you, it's what you answer to
*   File: **0-whatsmyname.c**

*Write a program that prints its name, followed by a new line.*

1.  If you rename the program, it will print the new name, without having to compile it again
2.  You should not remove the path before the name of the program    

Example:

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```

### 1. Silence is argument carried out by other means

*   File: **1-args.c**

*Write a program that prints the number of arguments passed into it.*

1.    Your program should print a number, followed by a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
```

###  2. The best argument against democracy is a five-minute conversation with the average voter 
*   File: **2-args.c**

*Write a program that prints all arguments it receives.*

1.  All arguments should be printed, including the first one
2.  Only print one argument per line, ending with a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
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
```

###  3. Neither irony nor sarcasm is argument 

*   File: **3-mul.c**

*Write a program that multiplies two numbers.*

1.  Your program should print the result of the multiplication, followed by a new line
2.  You can assume that the two numbers and result of the multiplication can be stored in an integer
3.  If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
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
```

###  4. To infinity and beyond 

*   File: **4-add.c**

*Write a program that adds positive numbers.*

1.  Print the result, followed by a new line
2.  If no number is passed to the program, print 0, followed by a new line
3.  If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
4.  You can assume that numbers and the addition of all the numbers can be stored in an int

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
```

###   5. Minimal Number of Coins for Change 

* File: **100-change.c**

*Write a program that prints the minimum number of coins to make change for an amount of money.*

1.  Usage: ./change cents
2.  where cents is the amount of cents you need to give back
3.  if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
4.  you should use atoi to parse the parameter passed to your program
5.  If the number passed as the argument is negative, print 0, followed by a new line
6.  You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
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
```

