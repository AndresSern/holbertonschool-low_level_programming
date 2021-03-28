# 0x18. C - Dynamic libraries

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
	<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
	<li>What are the differences between static and shared libraries</li>
	<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/FrHmqtTW-frrOt0yf2blOw" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
	<li><a href="/rltoken/Zj0XtgNWUQyEYuABr47p8Q" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
	<li><a href="/rltoken/NnmQ5eohod3BpT3r0cFlRA" title="Technical Writing" target="_blank">Technical Writing</a></li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**1-create_dynamic_lib.sh**:](#1-create_dynamic_libsh) Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.
1.	[**100-operations.so**:](#100-operationsso) I know, you’re missing C when coding in Python. So let’s fix that!Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 1-create_dynamic_lib.sh

**<p>Create a script that creates a dynamic library called <code>liball.so</code> from all the <code>.c</code> files that are in the current directory.</p>**

<pre><code>julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
julien@ubuntu:~/0x18. Dynamic libraries$ 
</code></pre>

### 100-operations.so

**<p>I know, you’re missing C when coding in Python. So let’s fix that!</p><p>Create a dynamic library that contains C functions that can be called from Python. See example for more detail.</p>**

<pre><code>julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
</code></pre>
