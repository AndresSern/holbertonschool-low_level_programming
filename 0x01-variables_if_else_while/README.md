# 0x01. C - Variables, if, else, while

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are the arithmetic operators and how to use them</li>
	<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
	<li>What the the relational operators and how to use them</li>
	<li>What values are considered TRUE and FALSE in C</li>
	<li>What are the boolean operators and how to use them</li>
	<li>How to use the <code>if</code>, <code>if ... else</code> statements</li>
	<li>How to use comments</li>
	<li>How to declare variables of types <code>char</code>, <code>int</code>, <code>unsigned int</code></li>
	<li>How to assign values to variables</li>
	<li>How to print the values of variables of type <code>char</code>, <code>int</code>, <code>unsigned int</code> with <code>printf</code></li>
	<li>How to use the <code>while</code> loop</li>
	<li>How to use variables with the <code>while</code> loop</li>
	<li>How to print variables using <code>printf</code></li>
	<li>What is the <code>ASCII</code> character set</li>
	<li>What are the purpose of the <code>gcc</code> flags <code>-m32</code> and <code>-m64</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/GB1UNodFfec0AXUfmSxsLA" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.</em>)</li>
	<li><a href="/rltoken/ckqC9BrBcMmv-DLmBauaWQ" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
	<li><a href="/rltoken/Oau_6LT7-3IIt5ew_3Ac6g" title="integers" target="_blank">integers</a> </li>
	<li><a href="/rltoken/r4hrHzg2X9JjnKj8sP_SAw" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
	<li><a href="/rltoken/W93uajwXtW3WOxOaeBtF-A" title="If statements in C" target="_blank">If statements in C</a> </li>
	<li><a href="/rltoken/PMD6eKdkj2RmIpagtABihw" title="if...else statement" target="_blank">if…else statement</a> </li>
	<li><a href="/rltoken/dCy4644-X_WJMYxRZwCfFQ" title="Relational operators" target="_blank">Relational operators</a> </li>
	<li><a href="/rltoken/gJzJXQoEdEN1Oxcutp_76Q" title="Logical operators" target="_blank">Logical operators</a> </li>
	<li><a href="/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ" title="while loop in C" target="_blank">while loop in C</a> </li>
	<li><a href="/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g" title="While loop" target="_blank">While loop</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-positive_or_negative.c**:](#0-positive_or_negativec) This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.
1.	[**1-last_digit.c**:](#1-last_digitc) This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.
2.	[**2-print_alphabet.c**:](#2-print_alphabetc) Program that prints the alphabet in lowercase, followed by a new line.
3.	[**3-print_alphabets.c**:](#3-print_alphabetsc) Program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
4.	[**4-print_alphabt.c**:](#4-print_alphabtc) Program that prints the alphabet in lowercase, followed by a new line.
5.	[**5-print_numbers.c**:](#5-print_numbersc) Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.
6.	[**6-print_numberz.c**:](#6-print_numberzc) Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.
7.	[**7-print_tebahpla.c**:](#7-print_tebahplac) Program that prints the lowercase alphabet in reverse, followed by a new line.
8.	[**8-print_base16.c**:](#8-print_base16c) Program that prints all the numbers of base 16 in lowercase, followed by a new line.
9.	[**9-print_comb.c**:](#9-print_combc) Program that prints all possible combinations of single-digit numbers.
10.	[**100-print_comb3.c**:](#100-print_comb3c) Program that prints all possible different combinations of two digits.
11.	[**102-print_comb5.c**:](#102-print_comb5c) Program that prints all possible combinations of two two-digit numbers.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-positive_or_negative.c

**<p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
</code></pre>

### 1-last_digit.c

**<p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
</code></pre>

### 2-print_alphabet.c

**<p>Program that prints the alphabet in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
</code></pre>

### 3-print_alphabets.c

**<p>Program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
</code></pre>

### 4-print_alphabt.c

**<p>Program that prints the alphabet in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
</code></pre>

### 5-print_numbers.c

**<p>Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

### 6-print_numberz.c

**<p>Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

### 7-print_tebahpla.c

**<p>Program that prints the lowercase alphabet in reverse, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
</code></pre>

### 8-print_base16.c

**<p>Program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
</code></pre>

### 9-print_comb.c

**<p>Program that prints all possible combinations of single-digit numbers.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
</code></pre>

### 100-print_comb3.c

**<p>Program that prints all possible different combinations of two digits.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
</code></pre>

### 102-print_comb5.c

**<p>Program that prints all possible combinations of two two-digit numbers.</p>**

<pre><code>julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ gcc -Wall -pedantic -Werror -Wextra 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
</code></pre>

