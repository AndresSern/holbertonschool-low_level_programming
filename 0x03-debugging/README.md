# 0x03. C - Debugging

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is debugging</li>
	<li>What are some methods of debugging manually</li>
	<li>How to read the error messages</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/iADtJa-KkjYI56m-cQyWIw" title="Debugging" target="_blank">Debugging</a></li>
	<li><a href="/rltoken/sS_CVV32moC3tyEImNCvig" title="Rubber Duck Debugging" target="_blank">Rubber Duck Debugging</a></li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-main.c**:](#0-mainc) In most projects, we often give you only one main file to test with. For example, this main file is a test for a <code>postitive_or_negative()</code> function similar to the one you worked with in <a href="/rltoken/oksQRX9MFUF8saGnlIKqYw" title="an earlier C project" target="_blank">an earlier C project</a>Based on the <code>main.c</code> file above, create a file named <code>0-main.c</code>. This file must test that the function <code>positive_or_negative()</code> gives the correct output when given a case of <code>0</code>.You are not coding the solution / function, you’re just testing it! However, you can adapt your function from <a href="/rltoken/oksQRX9MFUF8saGnlIKqYw" title="0x01. C - Variables, if, else, while - Task #0" target="_blank">0x01. C - Variables, if, else, while - Task #0</a> to compile with this main file to test locally.
1.	[**1-main.c**:](#1-mainc) Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.Your output should look like this
2.	[**2-largest_number.c**:](#2-largest_numberc) This program prints the largest of three integers.? That’s definitely not right.Fix the code in <code>2-largest_number.c</code> so that it correctly prints out the largest of three numbers, no matter the case.
3.	[**3-print_remaining_days.c**:](#3-print_remaining_daysc) This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.Output looks good for <code>04/01/1997</code>! Let’s make a new main file <code>3-main_b.c</code> to try a case that is a leap year <code>02/29/2000</code>.? That doesn’t seem right.Fix the <code>print_remaining_days()</code> function so that the output works correctly for <em>all</em> dates and <em>all</em> leap years.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-main.c

**<p>In most projects, we often give you only one main file to test with. For example, this main file is a test for a <code>postitive_or_negative()</code> function similar to the one you worked with in <a href="/rltoken/oksQRX9MFUF8saGnlIKqYw" title="an earlier C project" target="_blank">an earlier C project</a></p><p>Based on the <code>main.c</code> file above, create a file named <code>0-main.c</code>. This file must test that the function <code>positive_or_negative()</code> gives the correct output when given a case of <code>0</code>.</p><p>You are not coding the solution / function, you’re just testing it! However, you can adapt your function from <a href="/rltoken/oksQRX9MFUF8saGnlIKqYw" title="0x01. C - Variables, if, else, while - Task #0" target="_blank">0x01. C - Variables, if, else, while - Task #0</a> to compile with this main file to test locally.</p>**

<pre><code>carrie@ubuntu:/debugging$ cat main.c
#include "holberton.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

### 1-main.c

**<p>Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.</p><p>Your output should look like this</p>**

<pre><code>carrie@ubuntu:/debugging$ cat 1-main.c
#include &lt;stdio.h&gt;

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i &lt; 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

### 2-largest_number.c

**<p>This program prints the largest of three integers.</p><p>? That’s definitely not right.</p><p>Fix the code in <code>2-largest_number.c</code> so that it correctly prints out the largest of three numbers, no matter the case.</p>**

<pre><code>carrie@ubuntu:/debugging$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>

### 3-print_remaining_days.c

**<p>This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.</p><p>Output looks good for <code>04/01/1997</code>! Let’s make a new main file <code>3-main_b.c</code> to try a case that is a leap year <code>02/29/2000</code>.</p><p>? That doesn’t seem right.</p><p>Fix the <code>print_remaining_days()</code> function so that the output works correctly for <em>all</em> dates and <em>all</em> leap years.</p>**

<pre><code>carrie@ubuntu:/debugging$ cat 3-main_a.c
#include &lt;stdio.h&gt;
#include "holberton.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$
</code></pre>

