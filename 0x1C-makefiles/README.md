# 0x1C. C - Makefiles

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>What are <code>make</code>, Makefiles</li>
	<li>When, why and how to use Makefiles</li>
	<li>What are rules and how to set and use them</li>
	<li>What are explicit and implicit rules</li>
	<li>What are the most common / useful rules</li>
	<li>What are variables and how to set and use them</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/E3lCL-6xT3Qt_K38Tk4s_g" title="Makefile" target="_blank">Makefile</a> </li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-Makefile**:](#0-Makefile) Create your first Makefile.Requirements
1.	[**1-Makefile**:](#1-Makefile) Requirements

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-Makefile

**<p>Create your first Makefile.</p><p>Requirements</p>**

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$ ./holberton 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>

### 1-Makefile

**<p>Requirements</p>**

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c holberton.c -o holberton
julien@ubuntu:~/0x1C. Makefiles$
</code></pre>

