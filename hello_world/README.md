# C - Hello, World

In this project I discovered and learned the basics of C 9 tasks.

*However, here are the requirements that have been requested:*

## C

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


## Shell scripts

* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long ($ wc -l file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly #!/bin/bash


# **What does it do?**

## **An explanation of how each script works**

### **Task 0**
* [Preprocessor](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

While using the _gcc .._ command the script runs a C file through the preprocessor and save the result into another file.


### **Task 1**
* [Compiler](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/1-compiler)

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
	* Example: if the C file is main.c, the output file should be main.o

While using the _gcc .._ command the script compiles a C file but does not link.


### **Task 2**
* [Assembler](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
	* Example: if the C file is main.c, the output file should be main.s

While using the _gcc .._ command the script compiles a C file but does not link.


### **Task 3**
* [Name](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/3-name)

Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE

While using the _gcc .._ command the script compiles a C file but does not link.


### **Task 4**
* [Hello, puts](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/4-puts.c)

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0


While using the _program_ prints exactly "Programming is like building a multilingual puzzle, followed by a new line.


### **Task 5**
* [Hello, printf](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/5-printf.c)

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

* Use the function printf
* You are not allowed to use the function puts
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option


While using the _program_ prints exactly _with proper grammar, but the outcome is a piece of art,_ , followed by a new line.


### **Task 6**
* [Size is not grandeur, and territory does not make a nation](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example

```julien@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ echo $?
0
julien@ubuntu:~/c/$
```

* Warnings are allowed
* Your program should return 0
* If you are using a linux on Vagrant you might have to install the package libc6-dev-i386 to test the -m32 gcc option (normally you dont need to do anything on your sandbox).


While using the _program_ prints the size of various types on the computer it is compiled and run on.


## Advanced tasks


### **Task 7**
* [What happens when you type gcc main.c](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/7-blog_post)

Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.

* Use gcc as the compiler
* Have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

When done, please add all urls below (blog post, LinkedIn post, etc.)

	* [Linkedin](https://www.linkedin.com/posts/benjamin-estrada-880b06297_this-article-is-part-of-the-many-tasks-related-activity-7296967863184031745-DA89?utm_source=share&utm_medium=member_desktop&rcm=ACoAAEfjoWABQhDobpxQG_X41v8grgLc1NtVwLc)
	* [Medium](https://medium.com/@Aluranae/what-happens-when-you-type-gcc-main-c-18c99c020e97)

### **Task 8**
* [Intel](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE.
* The output file should be named the same as the C file, but with the extension .s instead of .c.
	* Example: if the C file is main.c, the output file should be main.s

While using the _gcc .._ command the script script that generates the assembly code (Intel syntax) of a C code and save it in an output file.


### **Task 9**
* [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](https://github.com/Aluranae/holbertonschool-low_level_programming/blob/main/hello_world/101-quote.c)

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
* Your program should return 1
* Your program should compile without any warnings when using the -Wall gcc option

While using the _program_ that prints exactly _and that piece of art is useful" - Dora Korpar, 2015-10-19_, followed by a new line, to the standard error.
