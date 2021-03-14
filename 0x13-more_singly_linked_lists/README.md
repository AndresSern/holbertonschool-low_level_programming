# 0x0B. Python - Input/Output

## GENERAL :open_book::open_book::open_book::

 <ol>
	<li>Why Python programming is awesome</li>
	<li>How to open a file</li>
	<li>How to write text in a file</li>
	<li>How to read the full content of a file </li>
	<li>How to read a file line by line</li>
	<li>How to move the cursor in a file</li>
	<li>How to make sure a file is closed after using it</li>
	<li>What is and how to use the <code>with</code> statement</li>
	<li>What is <code>JSON</code></li>
	<li>What is serialization</li>
	<li>What is deserialization</li>
	<li>How to convert a Python data structure to a JSON string </li>
	<li>How to convert a JSON string to a Python data structure</li>
</ol>

## RESOURCES:

 <ol>
	<li><a href="/rltoken/c5ypFfQwcM-SZ-7tr3WuxA" title="7.2. Reading and Writing Files" target="_blank">7.2. Reading and Writing Files</a> </li>
	<li><a href="/rltoken/1wqMFejKqBva-Lxws0lftw" title="8.7. Predefined Clean-up Actions" target="_blank">8.7. Predefined Clean-up Actions</a> </li>
	<li><a href="/rltoken/8aSPOpBZj9B1DB6GfoEWfg" title="Dive Into Python 3: Chapter 11. Files" target="_blank">Dive Into Python 3: Chapter 11. Files</a> (<em>until “11.4 Binary Files” (included)</em>)</li>
	<li><a href="/rltoken/XBqM3BrA_rUBw6DXw4X98Q" title="JSON encoder and decoder" target="_blank">JSON encoder and decoder</a> </li>
	<li><a href="/rltoken/derf9VLFVDnSgX2n-drwnw" title="Learn to Program 8 : Reading / Writing Files" target="_blank">Learn to Program 8 : Reading / Writing Files</a> </li>
	<li><a href="/rltoken/Y77h8aeRoljlN643yKfdTg" title="Automate the Boring Stuff with Python" target="_blank">Automate the Boring Stuff with Python</a> (<em>ch. 8 p 180-183 and ch. 14 p 326-333</em>)</li>
</ol>

## INTRODUCTION TO FILES :closed_book::closed_book::closed_book::

0.	[**0-read_file.py**:](#0-read_filepy) Function that reads a text file (<code>UTF8</code>) and prints it to stdout
1.	[**1-write_file.py**:](#1-write_filepy) Function that writes a string to a text file (<code>UTF8</code>) and returns the number of characters written
2.	[**2-append_write.py**:](#2-append_writepy) Function that appends a string at the end of a text file (<code>UTF8</code>) and returns the number of characters added
3.	[**3-to_json_string.py**:](#3-to_json_stringpy) Function that returns the JSON representation of an object (string)
4.	[**4-from_json_string.py**:](#4-from_json_stringpy) Function that returns an object (Python data structure) represented by a JSON string
5.	[**5-save_to_json_file.py**:](#5-save_to_json_filepy) Function that writes an Object to a text file, using a JSON representation
6.	[**6-load_from_json_file.py**:](#6-load_from_json_filepy) Function that creates an Object from a “JSON file”
7.	[**7-add_item.py**:](#7-add_itempy) Script that adds all arguments to a Python list, and then save them to a file
8.	[**8-class_to_json.py**:](#8-class_to_jsonpy) Function that returns the dictionary description with simple data structure (list, dictionary, string, integer and boolean) for JSON serialization of an object
9.	[**9-student.py**:](#9-studentpy) Class <code>Student</code> that defines a student by
10.	[**10-student.py**:](#10-studentpy) Class <code>Student</code> that defines a student by (based on <code>9-student.py</code>)
11.	[**11-student.py**:](#11-studentpy) Class <code>Student</code> that defines a student by (based on <code>10-student.py</code>)Now, you have a simple implementation of a serialization and deserialization mechanism (concept of representation of an object to another format, without losing any information and allow us to rebuild an object based on this representation)
12.	[**100-append_after.py**:](#100-append_afterpy) Function that inserts a line of text to a file, after each line containing a specific string (see example)

## FILES :bookmark_tabs::bookmark_tabs::bookmark_tabs::

### 0-read_file.py

**<p>Function that reads a text file (<code>UTF8</code>) and prints it to stdout</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 0-main.py
#!/usr/bin/python3
read_file = __import__('0-read_file').read_file

read_file("my_file_0.txt")

guillaume@ubuntu:~/0x0B$ cat my_file_0.txt
Holberton School offers a truly innovative approach to education:
focus on building reliable applications and scalable systems, take on real-world challenges, collaborate with your peers. 

A school every software engineer would have dreamt of!
guillaume@ubuntu:~/0x0B$ ./0-main.py
Holberton School offers a truly innovative approach to education:
focus on building reliable applications and scalable systems, take on real-world challenges, collaborate with your peers. 

A school every software engineer would have dreamt of!
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 1-write_file.py

**<p>Function that writes a string to a text file (<code>UTF8</code>) and returns the number of characters written</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 1-main.py
#!/usr/bin/python3
write_file = __import__('1-write_file').write_file

nb_characters = write_file("my_first_file.txt", "Holberton School is so cool!\n")
print(nb_characters)

guillaume@ubuntu:~/0x0B$ ./1-main.py
29
guillaume@ubuntu:~/0x0B$ cat my_first_file.txt
Holberton School is so cool!
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 2-append_write.py

**<p>Function that appends a string at the end of a text file (<code>UTF8</code>) and returns the number of characters added</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 2-main.py
#!/usr/bin/python3
append_write = __import__('2-append_write').append_write

nb_characters_added = append_write("file_append.txt", "Holberton School is so cool!\n")
print(nb_characters_added)

guillaume@ubuntu:~/0x0B$ cat file_append.txt
cat: file_append.txt: No such file or directory
guillaume@ubuntu:~/0x0B$ ./2-main.py
29
guillaume@ubuntu:~/0x0B$ cat file_append.txt
Holberton School is so cool!
guillaume@ubuntu:~/0x0B$ ./2-main.py
29
guillaume@ubuntu:~/0x0B$ cat file_append.txt
Holberton School is so cool!
Holberton School is so cool!
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 3-to_json_string.py

**<p>Function that returns the JSON representation of an object (string)</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 3-main.py
#!/usr/bin/python3
to_json_string = __import__('3-to_json_string').to_json_string

my_list = [1, 2, 3]
s_my_list = to_json_string(my_list)
print(s_my_list)
print(type(s_my_list))

my_dict = { 
    'id': 12,
    'name': "John",
    'places': [ "San Francisco", "Tokyo" ],
    'is_active': True,
    'info': {
        'age': 36,
        'average': 3.14
    }
}
s_my_dict = to_json_string(my_dict)
print(s_my_dict)
print(type(s_my_dict))

try:
    my_set = { 132, 3 }
    s_my_set = to_json_string(my_set)
    print(s_my_set)
    print(type(s_my_set))
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

guillaume@ubuntu:~/0x0B$ ./3-main.py
[1, 2, 3]
&lt;class 'str'&gt;
{"id": 12, "is_active": true, "name": "John", "info": {"average": 3.14, "age": 36}, "places": ["San Francisco", "Tokyo"]}
&lt;class 'str'&gt;
[TypeError] {3, 132} is not JSON serializable
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 4-from_json_string.py

**<p>Function that returns an object (Python data structure) represented by a JSON string</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 4-main.py
#!/usr/bin/python3
from_json_string = __import__('4-from_json_string').from_json_string

s_my_list = "[1, 2, 3]"
my_list = from_json_string(s_my_list)
print(my_list)
print(type(my_list))

s_my_dict = """
{"is_active": true, "info": {"age": 36, "average": 3.14}, 
"id": 12, "name": "John", "places": ["San Francisco", "Tokyo"]}
"""
my_dict = from_json_string(s_my_dict)
print(my_dict)
print(type(my_dict))

try:
    s_my_dict = """
    {"is_active": true, 12 }
    """
    my_dict = from_json_string(s_my_dict)
    print(my_dict)
    print(type(my_dict))
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

guillaume@ubuntu:~/0x0B$ ./4-main.py
[1, 2, 3]
&lt;class 'list'&gt;
{'id': 12, 'is_active': True, 'name': 'John', 'info': {'age': 36, 'average': 3.14}, 'places': ['San Francisco', 'Tokyo']}
&lt;class 'dict'&gt;
[ValueError] Expecting property name enclosed in double quotes: line 2 column 25 (char 25)
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 5-save_to_json_file.py

**<p>Function that writes an Object to a text file, using a JSON representation</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 5-main.py
#!/usr/bin/python3
save_to_json_file = __import__('5-save_to_json_file').save_to_json_file

filename = "my_list.json"
my_list = [1, 2, 3]
save_to_json_file(my_list, filename)

filename = "my_dict.json"
my_dict = { 
    'id': 12,
    'name': "John",
    'places': [ "San Francisco", "Tokyo" ],
    'is_active': True,
    'info': {
        'age': 36,
        'average': 3.14
    }
}
save_to_json_file(my_dict, filename)

try:
    filename = "my_set.json"
    my_set = { 132, 3 }
    save_to_json_file(my_set, filename)
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

guillaume@ubuntu:~/0x0B$ ./5-main.py
[TypeError] {3, 132} is not JSON serializable
guillaume@ubuntu:~/0x0B$ cat my_list.json ; echo ""
[1, 2, 3]
guillaume@ubuntu:~/0x0B$ cat my_dict.json ; echo ""
{"name": "John", "places": ["San Francisco", "Tokyo"], "id": 12, "info": {"average": 3.14, "age": 36}, "is_active": true}
guillaume@ubuntu:~/0x0B$ cat my_set.json ; echo ""

guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 6-load_from_json_file.py

**<p>Function that creates an Object from a “JSON file”</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat my_fake.json
{"is_active": true, 12 }
guillaume@ubuntu:~/0x0B$ cat 6-main.py
#!/usr/bin/python3
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file

filename = "my_list.json"
my_list = load_from_json_file(filename)
print(my_list)
print(type(my_list))

filename = "my_dict.json"
my_dict = load_from_json_file(filename)
print(my_dict)
print(type(my_dict))

try:
    filename = "my_set_doesnt_exist.json"
    my_set = load_from_json_file(filename)
    print(my_set)
    print(type(my_set))
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

try:
    filename = "my_fake.json"
    my_fake = load_from_json_file(filename)
    print(my_fake)
    print(type(my_fake))
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))

guillaume@ubuntu:~/0x0B$ cat my_list.json ; echo ""
[1, 2, 3]
guillaume@ubuntu:~/0x0B$ cat my_dict.json ; echo ""
{"name": "John", "places": ["San Francisco", "Tokyo"], "id": 12, "info": {"average": 3.14, "age": 36}, "is_active": true}
guillaume@ubuntu:~/0x0B$ cat my_fake.json ; echo ""
{"is_active": true, 12 }
guillaume@ubuntu:~/0x0B$ ./6-main.py
[1, 2, 3]
&lt;class 'list'&gt;
{'name': 'John', 'info': {'age': 36, 'average': 3.14}, 'id': 12, 'places': ['San Francisco', 'Tokyo'], 'is_active': True}
&lt;class 'dict'&gt;
[FileNotFoundError] [Errno 2] No such file or directory: 'my_set_doesnt_exist.json'
[ValueError] Expecting property name enclosed in double quotes: line 1 column 21 (char 20)
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 7-add_item.py

**<p>Script that adds all arguments to a Python list, and then save them to a file</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat add_item.json
cat: add_item.json: No such file or directory
guillaume@ubuntu:~/0x0B$ ./7-add_item.py
guillaume@ubuntu:~/0x0B$ cat add_item.json ; echo ""
[]
guillaume@ubuntu:~/0x0B$ ./7-add_item.py Holberton School
guillaume@ubuntu:~/0x0B$ cat add_item.json ; echo ""
["Holberton", "School"]
guillaume@ubuntu:~/0x0B$ ./7-add_item.py 89 Python C
guillaume@ubuntu:~/0x0B$ cat add_item.json ; echo ""
["Holberton", "School", "89", "Python", "C"]
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 8-class_to_json.py

**<p>Function that returns the dictionary description with simple data structure (list, dictionary, string, integer and boolean) for JSON serialization of an object</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 8-my_class.py 
#!/usr/bin/python3
""" My class module
"""

class MyClass:
    """ My class
    """

    def __init__(self, name):
        self.name = name
        self.number = 0

    def __str__(self):
        return "[MyClass] {} - {:d}".format(self.name, self.number)

guillaume@ubuntu:~/0x0B$ cat 8-main.py 
#!/usr/bin/python3
MyClass = __import__('8-my_class').MyClass
class_to_json = __import__('8-class_to_json').class_to_json

m = MyClass("John")
m.number = 89
print(type(m))
print(m)

mj = class_to_json(m)
print(type(mj))
print(mj)

guillaume@ubuntu:~/0x0B$ ./8-main.py 
&lt;class '8-my_class.MyClass'&gt;
[MyClass] John - 89
&lt;class 'dict'&gt;
{'name': 'John', 'number': 89}
guillaume@ubuntu:~/0x0B$ 
guillaume@ubuntu:~/0x0B$ cat 8-my_class_2.py 
#!/usr/bin/python3
""" My class module
"""

class MyClass:
    """ My class
    """

    score = 0

    def __init__(self, name, number = 4):
        self.__name = name
        self.number = number
        self.is_team_red = (self.number % 2) == 0

    def win(self):
        self.score += 1

    def lose(self):
        self.score -= 1

    def __str__(self):
        return "[MyClass] {} - {:d} =&gt; {:d}".format(self.__name, self.number, self.score)

guillaume@ubuntu:~/0x0B$ cat 8-main_2.py 
#!/usr/bin/python3
MyClass = __import__('8-my_class_2').MyClass
class_to_json = __import__('8-class_to_json').class_to_json

m = MyClass("John")
m.win()
print(type(m))
print(m)

mj = class_to_json(m)
print(type(mj))
print(mj)

guillaume@ubuntu:~/0x0B$ ./8-main_2.py 
&lt;class '8-my_class_2.MyClass'&gt;
[MyClass] John - 4 =&gt; 1
&lt;class 'dict'&gt;
{'number': 4, '_MyClass__name': 'John', 'is_team_red': True, 'score': 1}
guillaume@ubuntu:~/0x0B$
</code></pre>

### 9-student.py

**<p>Class <code>Student</code> that defines a student by</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 9-main.py 
#!/usr/bin/python3
Student = __import__('9-student').Student

students = [Student("John", "Doe", 23), Student("Bob", "Dylan", 27)]

for student in students:
    j_student = student.to_json()
    print(type(j_student))
    print(j_student['first_name'])
    print(type(j_student['first_name']))
    print(j_student['age'])
    print(type(j_student['age']))

guillaume@ubuntu:~/0x0B$ ./9-main.py 
&lt;class 'dict'&gt;
John
&lt;class 'str'&gt;
23
&lt;class 'int'&gt;
&lt;class 'dict'&gt;
Bob
&lt;class 'str'&gt;
27
&lt;class 'int'&gt;
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 10-student.py

**<p>Class <code>Student</code> that defines a student by (based on <code>9-student.py</code>)</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 10-main.py 
#!/usr/bin/python3
Student = __import__('10-student').Student

student_1 = Student("John", "Doe", 23)
student_2 = Student("Bob", "Dylan", 27)

j_student_1 = student_1.to_json()
j_student_2 = student_2.to_json(['first_name', 'age'])
j_student_3 = student_2.to_json(['middle_name', 'age'])

print(j_student_1)
print(j_student_2)
print(j_student_3)

guillaume@ubuntu:~/0x0B$ ./10-main.py 
{'age': 23, 'last_name': 'Doe', 'first_name': 'John'}
{'age': 27, 'first_name': 'Bob'}
{'age': 27}
guillaume@ubuntu:~/0x0B$
</code></pre>

### 11-student.py

**<p>Class <code>Student</code> that defines a student by (based on <code>10-student.py</code>)</p><p>Now, you have a simple implementation of a serialization and deserialization mechanism (concept of representation of an object to another format, without losing any information and allow us to rebuild an object based on this representation)</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 11-main.py 
#!/usr/bin/python3
import os
import sys

Student = __import__('11-student').Student
read_file = __import__('0-read_file').read_file
save_to_json_file = __import__('5-save_to_json_file').save_to_json_file
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file

path = sys.argv[1]

if os.path.exists(path):
    os.remove(path)

student_1 = Student("John", "Doe", 23)
j_student_1 = student_1.to_json()
print("Initial student:")
print(student_1)
print(type(student_1))
print(type(j_student_1))
print("{} {} {}".format(student_1.first_name, student_1.last_name, student_1.age))


save_to_json_file(j_student_1, path)
read_file(path)
print("\nSaved to disk")


print("Fake student:")
new_student_1 = Student("Fake", "Fake", 89)
print(new_student_1)
print(type(new_student_1))
print("{} {} {}".format(new_student_1.first_name, new_student_1.last_name, new_student_1.age))


print("Load dictionary from file:")
new_j_student_1 = load_from_json_file(path)

new_student_1.reload_from_json(j_student_1)
print(new_student_1)
print(type(new_student_1))
print("{} {} {}".format(new_student_1.first_name, new_student_1.last_name, new_student_1.age))

guillaume@ubuntu:~/0x0B$ ./11-main.py student.json
Initial student:
&lt;11-student.Student object at 0x7f832826eda0&gt;
&lt;class '11-student.Student'&gt;
&lt;class 'dict'&gt;
John Doe 23
{"last_name": "Doe", "first_name": "John", "age": 23}
Saved to disk
Fake student:
&lt;11-student.Student object at 0x7f832826edd8&gt;
&lt;class '11-student.Student'&gt;
Fake Fake 89
Load dictionary from file:
&lt;11-student.Student object at 0x7f832826edd8&gt;
&lt;class '11-student.Student'&gt;
John Doe 23
guillaume@ubuntu:~/0x0B$ cat student.json ; echo ""
{"last_name": "Doe", "first_name": "John", "age": 23}
guillaume@ubuntu:~/0x0B$ 
</code></pre>

### 100-append_after.py

**<p>Function that inserts a line of text to a file, after each line containing a specific string (see example)</p><p></p>**

<pre><code>guillaume@ubuntu:~/0x0B$ cat 100-main.py
#!/usr/bin/python3
append_after = __import__('100-append_after').append_after

append_after("append_after_100.txt", "Python", "\"C is fun!\"\n")

guillaume@ubuntu:~/0x0B$ cat append_after_100.txt
At Holberton School,
Python is really important,
But it can be very hard if:
- You don't get all Pythonic tricks
- You don't have strong C knowledge.
guillaume@ubuntu:~/0x0B$ ./100-main.py
guillaume@ubuntu:~/0x0B$ cat append_after_100.txt
At Holberton School,
Python is really important,
"C is fun!"
But it can be very hard if:
- You don't get all Pythonic tricks
"C is fun!"
- You don't have strong C knowledge.
guillaume@ubuntu:~/0x0B$ ./100-main.py
guillaume@ubuntu:~/0x0B$ cat append_after_100.txt
At Holberton School,
Python is really important,
"C is fun!"
"C is fun!"
But it can be very hard if:
- You don't get all Pythonic tricks
"C is fun!"
"C is fun!"
- You don't have strong C knowledge.
guillaume@ubuntu:~/0x0B$ 
</code></pre>
